#pragma once
namespace {
#include "BGNet/Logging/zzzz__ConsoleLogger_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogInfo)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xdd3dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogError)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xdd3e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::System::Exception, ::StringW)>(&::BGNet::Logging::ConsoleLogger::LogException)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xdd403c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)(::StringW)>(&::BGNet::Logging::ConsoleLogger::LogWarning)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xdd4170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::ConsoleLogger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::ConsoleLogger::*)()>(&::BGNet::Logging::ConsoleLogger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd4250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::BGNet::Logging::____BGNet__Logging__Debug__ILogger
constexpr  ::BGNet::Logging::ConsoleLogger::operator ::BGNet::Logging::____BGNet__Logging__Debug__ILogger() const noexcept {
return ::BGNet::Logging::____BGNet__Logging__Debug__ILogger(::bs_hook::Il2CppWrapperType::instance);
}
 void ::BGNet::Logging::ConsoleLogger::LogInfo(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::BGNet::Logging::ConsoleLogger::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::BGNet::Logging::ConsoleLogger::LogException(::System::Exception exception, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception, message);
}
 void ::BGNet::Logging::ConsoleLogger::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
// Ctor Parameters []
 ::BGNet::Logging::ConsoleLogger::ConsoleLogger()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ConsoleLogger>())) {}
 void ::BGNet::Logging::ConsoleLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::ConsoleLogger>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
