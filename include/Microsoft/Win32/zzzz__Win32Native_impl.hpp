#pragma once
#include "Microsoft/Win32/zzzz__Win32Native_def.hpp"
//  Writing Method size for method: Microsoft::Win32::Win32Native.GetMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&Microsoft::Win32::Win32Native::GetMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22be7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::Win32Native>::get(),
                            "GetMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Microsoft::Win32::Win32Native.MakeHRFromErrorCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&Microsoft::Win32::Win32Native::MakeHRFromErrorCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22be84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::Win32Native>::get(),
                            "MakeHRFromErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 ::StringW Microsoft::Win32::Win32Native::GetMessage(int32_t hr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::Win32Native>::get(),
                            "GetMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, hr);
}
 int32_t Microsoft::Win32::Win32Native::MakeHRFromErrorCode(int32_t errorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Microsoft::Win32::Win32Native>::get(),
                            "MakeHRFromErrorCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, errorCode);
}
