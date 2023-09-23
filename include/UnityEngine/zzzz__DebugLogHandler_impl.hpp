#pragma once
#include "UnityEngine/zzzz__DebugLogHandler_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ILogHandler_def.hpp"
#include "UnityEngine/zzzz__LogOption_def.hpp"
//  Writing Method size for method: UnityEngine::DebugLogHandler.Internal_Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::LogType, UnityEngine::LogOption, ::StringW, UnityEngine::Object)>(&UnityEngine::DebugLogHandler::Internal_Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2b297c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "Internal_Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::DebugLogHandler.Internal_LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception, UnityEngine::Object)>(&UnityEngine::DebugLogHandler::Internal_LogException)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2b29824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "Internal_LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::DebugLogHandler.LogFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(UnityEngine::LogType, UnityEngine::Object, ::StringW, ::ArrayW<::bs_hook::Il2CppWrapperType>)>(&UnityEngine::DebugLogHandler::LogFormat)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2b29868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "LogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::DebugLogHandler.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)(System::Exception, UnityEngine::Object)>(&UnityEngine::DebugLogHandler::LogException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2b298d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::DebugLogHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::DebugLogHandler::*)()>(&UnityEngine::DebugLogHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b29964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ILogHandler
constexpr  UnityEngine::DebugLogHandler::operator UnityEngine::ILogHandler() const noexcept {
return UnityEngine::ILogHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::DebugLogHandler::Internal_Log(UnityEngine::LogType level, UnityEngine::LogOption options, ::StringW msg, UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "Internal_Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogOption>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, level, options, msg, obj);
}
 void UnityEngine::DebugLogHandler::Internal_LogException(System::Exception ex, UnityEngine::Object obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "Internal_LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ex, obj);
}
 void UnityEngine::DebugLogHandler::LogFormat(UnityEngine::LogType logType, UnityEngine::Object context, ::StringW format, ::ArrayW<::bs_hook::Il2CppWrapperType> args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "LogFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::LogType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, logType, context, format, args);
}
 void UnityEngine::DebugLogHandler::LogException(System::Exception exception, UnityEngine::Object context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception, context);
}
// Ctor Parameters []
 UnityEngine::DebugLogHandler::DebugLogHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DebugLogHandler>())) {}
 void UnityEngine::DebugLogHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::DebugLogHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
