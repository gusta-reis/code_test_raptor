/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_MUTEX_H
#define Z_INCLUDE_SYSCALLS_MUTEX_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <zephyr/syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_z_sys_mutex_kernel_lock(struct sys_mutex * mutex, k_timeout_t timeout);

__pinned_func
static inline int z_sys_mutex_kernel_lock(struct sys_mutex * mutex, k_timeout_t timeout)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct sys_mutex * val; } parm0 = { .val = mutex };
		union { uintptr_t x; k_timeout_t val; } parm1 = { .val = timeout };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK);
	}
#endif
	compiler_barrier();
	return z_impl_z_sys_mutex_kernel_lock(mutex, timeout);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define z_sys_mutex_kernel_lock(mutex, timeout) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK, z_sys_mutex_kernel_lock, mutex, timeout); 	syscall__retval = z_sys_mutex_kernel_lock(mutex, timeout); 	sys_port_trace_syscall_exit(K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK, z_sys_mutex_kernel_lock, mutex, timeout, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_z_sys_mutex_kernel_unlock(struct sys_mutex * mutex);

__pinned_func
static inline int z_sys_mutex_kernel_unlock(struct sys_mutex * mutex)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct sys_mutex * val; } parm0 = { .val = mutex };
		return (int) arch_syscall_invoke1(parm0.x, K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK);
	}
#endif
	compiler_barrier();
	return z_impl_z_sys_mutex_kernel_unlock(mutex);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define z_sys_mutex_kernel_unlock(mutex) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK, z_sys_mutex_kernel_unlock, mutex); 	syscall__retval = z_sys_mutex_kernel_unlock(mutex); 	sys_port_trace_syscall_exit(K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK, z_sys_mutex_kernel_unlock, mutex, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
