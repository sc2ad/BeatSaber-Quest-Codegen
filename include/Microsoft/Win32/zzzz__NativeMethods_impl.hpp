#pragma once
#include "Microsoft/Win32/zzzz__NativeMethods_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeWaitHandle_def.hpp"
//  Writing Method size for method: Microsoft::Win32::NativeMethods.DuplicateHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Runtime::InteropServices::HandleRef, System::Runtime::InteropServices::SafeHandle, System::Runtime::InteropServices::HandleRef, ByRef<Microsoft::Win32::SafeHandles::SafeWaitHandle>, int32_t, bool, int32_t)>(&Microsoft::Win32::NativeMethods::DuplicateHandle)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2698f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "DuplicateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Microsoft::Win32::SafeHandles::SafeWaitHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.DuplicateHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Runtime::InteropServices::HandleRef, System::Runtime::InteropServices::HandleRef, System::Runtime::InteropServices::HandleRef, ByRef<Microsoft::Win32::SafeHandles::SafeProcessHandle>, int32_t, bool, int32_t)>(&Microsoft::Win32::NativeMethods::DuplicateHandle)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2699104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "DuplicateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Microsoft::Win32::SafeHandles::SafeProcessHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetCurrentProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&Microsoft::Win32::NativeMethods::GetCurrentProcess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2699280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetExitCodeProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ByRef<int32_t>)>(&Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2699284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetExitCodeProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetExitCodeProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::SafeHandles::SafeProcessHandle, ByRef<int32_t>)>(&Microsoft::Win32::NativeMethods::GetExitCodeProcess)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2699288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetExitCodeProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetProcessTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t, ByRef<int64_t>, ByRef<int64_t>, ByRef<int64_t>, ByRef<int64_t>)>(&Microsoft::Win32::NativeMethods::GetProcessTimes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2699370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetProcessTimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Microsoft::Win32::SafeHandles::SafeProcessHandle, ByRef<int64_t>, ByRef<int64_t>, ByRef<int64_t>, ByRef<int64_t>)>(&Microsoft::Win32::NativeMethods::GetProcessTimes)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2699374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.GetCurrentProcessId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&Microsoft::Win32::NativeMethods::GetCurrentProcessId)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x269947c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetCurrentProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::NativeMethods.CloseProcess
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::cordl_internals::intptr_t)>(&Microsoft::Win32::NativeMethods::CloseProcess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2699480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "CloseProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
 bool Microsoft::Win32::NativeMethods::DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::SafeHandle hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<Microsoft::Win32::SafeHandles::SafeWaitHandle> targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "DuplicateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::SafeHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Microsoft::Win32::SafeHandles::SafeWaitHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
}
 bool Microsoft::Win32::NativeMethods::DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::HandleRef hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<Microsoft::Win32::SafeHandles::SafeProcessHandle> targetHandle, int32_t dwDesiredAccess, bool bInheritHandle, int32_t dwOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "DuplicateHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::HandleRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<Microsoft::Win32::SafeHandles::SafeProcessHandle>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hSourceProcessHandle, hSourceHandle, hTargetProcess, targetHandle, dwDesiredAccess, bInheritHandle, dwOptions);
}
 ::cordl_internals::intptr_t Microsoft::Win32::NativeMethods::GetCurrentProcess()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetCurrentProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
 bool Microsoft::Win32::NativeMethods::GetExitCodeProcess(::cordl_internals::intptr_t processHandle, ByRef<int32_t> exitCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetExitCodeProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, processHandle, exitCode);
}
 bool Microsoft::Win32::NativeMethods::GetExitCodeProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle processHandle, ByRef<int32_t> exitCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetExitCodeProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, processHandle, exitCode);
}
 bool Microsoft::Win32::NativeMethods::GetProcessTimes(::cordl_internals::intptr_t handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, creation, exit, kernel, user);
}
 bool Microsoft::Win32::NativeMethods::GetProcessTimes(Microsoft::Win32::SafeHandles::SafeProcessHandle handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetProcessTimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Microsoft::Win32::SafeHandles::SafeProcessHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle, creation, exit, kernel, user);
}
 int32_t Microsoft::Win32::NativeMethods::GetCurrentProcessId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "GetCurrentProcessId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 bool Microsoft::Win32::NativeMethods::CloseProcess(::cordl_internals::intptr_t handle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::NativeMethods>::get(),
                            "CloseProcess",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
