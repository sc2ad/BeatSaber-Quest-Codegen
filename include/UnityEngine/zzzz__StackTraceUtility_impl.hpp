#pragma once
namespace {
#include "UnityEngine/zzzz__StackTraceUtility_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.SetProjectFolder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::StackTraceUtility::SetProjectFolder)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2b5a424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "SetProjectFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::StackTraceUtility::ExtractStackTrace)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2b5a500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractStringFromExceptionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::bs_hook::Il2CppWrapperType, ByRef<::StringW>, ByRef<::StringW>)>(&::UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2b5ad0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractStringFromExceptionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::StackTraceUtility.ExtractFormattedStackTrace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Diagnostics::StackTrace)>(&::UnityEngine::StackTraceUtility::ExtractFormattedStackTrace)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x2b5a664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractFormattedStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::StackTrace>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::StackTraceUtility::__set_projectFolder(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "projectFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get>(std::forward<::StringW>(value));
}
 ::StringW ::UnityEngine::StackTraceUtility::__get_projectFolder()  {
return ::cordl_internals::getStaticField<::StringW, "projectFolder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get>();
}
 void ::UnityEngine::StackTraceUtility::SetProjectFolder(::StringW folder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "SetProjectFolder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, folder);
}
 ::StringW ::UnityEngine::StackTraceUtility::ExtractStackTrace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::StackTraceUtility::ExtractStringFromExceptionInternal(::bs_hook::Il2CppWrapperType exceptiono, ByRef<::StringW> message, ByRef<::StringW> stackTrace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractStringFromExceptionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exceptiono, message, stackTrace);
}
 ::StringW ::UnityEngine::StackTraceUtility::ExtractFormattedStackTrace(::System::Diagnostics::StackTrace stackTrace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::StackTraceUtility>::get(),
                            "ExtractFormattedStackTrace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::StackTrace>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stackTrace);
}
} // end anonymous namespace
