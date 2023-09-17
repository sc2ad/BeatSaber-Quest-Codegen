#pragma once
#include "System/Threading/AbandonedMutexException.hpp"
#include "System/Threading/AsyncLocalValueChangedArgs_1.hpp"
#include "System/Threading/AsyncLocal_1.hpp"
#include "System/Threading/AutoResetEvent.hpp"
#include "System/Threading/CancellationCallbackCoreWorkArguments.hpp"
#include "System/Threading/CancellationCallbackInfo.hpp"
#include "System/Threading/CancellationToken.hpp"
#include "System/Threading/CancellationTokenRegistration.hpp"
#include "System/Threading/CancellationTokenSource.hpp"
#include "System/Threading/ContextCallback.hpp"
#include "System/Threading/EventResetMode.hpp"
#include "System/Threading/EventWaitHandle.hpp"
#include "System/Threading/ExecutionContext.hpp"
#include "System/Threading/ExecutionContextSwitcher.hpp"
#include "System/Threading/IAsyncLocal.hpp"
#include "System/Threading/IThreadPoolWorkItem.hpp"
#include "System/Threading/Interlocked.hpp"
#include "System/Threading/InternalThread.hpp"
#include "System/Threading/LazyInitializer.hpp"
#include "System/Threading/LazyThreadSafetyMode.hpp"
#include "System/Threading/Lock.hpp"
#include "System/Threading/LockHolder.hpp"
#include "System/Threading/LockQueue.hpp"
#include "System/Threading/LockRecursionException.hpp"
#include "System/Threading/LockRecursionPolicy.hpp"
#include "System/Threading/ManualResetEvent.hpp"
#include "System/Threading/ManualResetEventSlim.hpp"
#include "System/Threading/Monitor.hpp"
#include "System/Threading/Mutex.hpp"
#include "System/Threading/NativeEventCalls.hpp"
#include "System/Threading/NativeOverlapped.hpp"
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
#include "System/Threading/ParameterizedThreadStart.hpp"
#include "System/Threading/PlatformHelper.hpp"
#include "System/Threading/QueueUserWorkItemCallback.hpp"
#include "System/Threading/ReaderWriterCount.hpp"
#include "System/Threading/ReaderWriterLock.hpp"
#include "System/Threading/ReaderWriterLockSlim.hpp"
#include "System/Threading/RegisteredWaitHandle.hpp"
#include "System/Threading/SemaphoreFullException.hpp"
#include "System/Threading/SemaphoreSlim.hpp"
#include "System/Threading/SendOrPostCallback.hpp"
#include "System/Threading/SparselyPopulatedArrayAddInfo_1.hpp"
#include "System/Threading/SparselyPopulatedArrayFragment_1.hpp"
#include "System/Threading/SparselyPopulatedArray_1.hpp"
#include "System/Threading/SpinLock.hpp"
#include "System/Threading/SpinWait.hpp"
#include "System/Threading/StackCrawlMark.hpp"
#include "System/Threading/SynchronizationContext.hpp"
#include "System/Threading/SynchronizationContextProperties.hpp"
#include "System/Threading/SynchronizationLockException.hpp"
#include "System/Threading/SystemThreading_ThreadLocalDebugView_1.hpp"
#include "System/Threading/Thread.hpp"
#include "System/Threading/ThreadAbortException.hpp"
#include "System/Threading/ThreadHelper.hpp"
#include "System/Threading/ThreadInterruptedException.hpp"
#include "System/Threading/ThreadLocal_1.hpp"
#include "System/Threading/ThreadPool.hpp"
#include "System/Threading/ThreadPoolGlobals.hpp"
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "System/Threading/ThreadPoolWorkQueueThreadLocals.hpp"
#include "System/Threading/ThreadPriority.hpp"
#include "System/Threading/ThreadStart.hpp"
#include "System/Threading/ThreadState.hpp"
#include "System/Threading/ThreadStateException.hpp"
#include "System/Threading/Timeout.hpp"
#include "System/Threading/TimeoutHelper.hpp"
#include "System/Threading/Timer.hpp"
#include "System/Threading/TimerCallback.hpp"
#include "System/Threading/Volatile.hpp"
#include "System/Threading/WaitCallback.hpp"
#include "System/Threading/WaitHandle.hpp"
#include "System/Threading/WaitHandleCannotBeOpenedException.hpp"
#include "System/Threading/WaitOrTimerCallback.hpp"