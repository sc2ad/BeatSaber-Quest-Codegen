#pragma once
namespace {
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::*)(::BGNet::Logging::____BGNet__Logging__Debug__ILogger)>(&::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdd44e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::__set_logger(::BGNet::Logging::____BGNet__Logging__Debug__ILogger value)  {
::cordl_internals::setInstanceField<::BGNet::Logging::____BGNet__Logging__Debug__ILogger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>(value));
}
constexpr ::BGNet::Logging::____BGNet__Logging__Debug__ILogger ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::__get_logger() const {
return ::cordl_internals::getInstanceField<::BGNet::Logging::____BGNet__Logging__Debug__ILogger, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::__set_next(::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList value)  {
::cordl_internals::setInstanceField<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList>(value));
}
constexpr ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::__get_next() const {
return ::cordl_internals::getInstanceField<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "logger", ty: "::BGNet::Logging::____BGNet__Logging__Debug__ILogger", modifiers: "", def_value: None }]
 ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::____BGNet__Logging__Debug__LoggerLinkedList(::BGNet::Logging::____BGNet__Logging__Debug__ILogger logger)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____BGNet__Logging__Debug__LoggerLinkedList>(logger))) {}
 void ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList::_ctor(::BGNet::Logging::____BGNet__Logging__Debug__ILogger logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, logger);
}
//  Writing Method size for method: ::BGNet::Logging::____BGNet__Logging__Debug__ILogger.LogInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::____BGNet__Logging__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Logging::____BGNet__Logging__Debug__ILogger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::____BGNet__Logging__Debug__ILogger.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::____BGNet__Logging__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Logging::____BGNet__Logging__Debug__ILogger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::____BGNet__Logging__Debug__ILogger.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::____BGNet__Logging__Debug__ILogger::*)(::System::Exception, ::StringW)>(&::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Logging::____BGNet__Logging__Debug__ILogger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::____BGNet__Logging__Debug__ILogger.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::____BGNet__Logging__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::BGNet::Logging::____BGNet__Logging__Debug__ILogger),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 void ::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogInfo(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                            "LogInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 void ::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogException(::System::Exception exception, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception, message);
}
 void ::BGNet::Logging::____BGNet__Logging__Debug__ILogger::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
//  Writing Method size for method: ::BGNet::Logging::Debug.NoDomainReloadInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BGNet::Logging::Debug::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xdd4258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.AddLogger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::____BGNet__Logging__Debug__ILogger)>(&::BGNet::Logging::Debug::AddLogger)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xdd42f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "AddLogger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.RemoveLogger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::____BGNet__Logging__Debug__ILogger)>(&::BGNet::Logging::Debug::RemoveLogger)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xdd4508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "RemoveLogger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::Log)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xdd4754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogError
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogError)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xdd4848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception, ::StringW)>(&::BGNet::Logging::Debug::LogException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xdd4940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogWarning)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xdd4a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::BGNet::Logging::Debug::__set__loggersMutex(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::BGNet::Logging::Debug::__get__loggersMutex()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get>();
}
 void ::BGNet::Logging::Debug::__set__loggers(::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList value)  {
::cordl_internals::setStaticField<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get>(std::forward<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList>(value));
}
 ::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList ::BGNet::Logging::Debug::__get__loggers()  {
return ::cordl_internals::getStaticField<::BGNet::Logging::____BGNet__Logging__Debug__LoggerLinkedList, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get>();
}
 void ::BGNet::Logging::Debug::NoDomainReloadInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "NoDomainReloadInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void ::BGNet::Logging::Debug::AddLogger(::BGNet::Logging::____BGNet__Logging__Debug__ILogger logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "AddLogger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
 void ::BGNet::Logging::Debug::RemoveLogger(::BGNet::Logging::____BGNet__Logging__Debug__ILogger logger)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "RemoveLogger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::____BGNet__Logging__Debug__ILogger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
 void ::BGNet::Logging::Debug::Log(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 void ::BGNet::Logging::Debug::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
/// @param message: ::StringW (default: csnull)
 void ::BGNet::Logging::Debug::LogException(::System::Exception exception, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception, message);
}
 void ::BGNet::Logging::Debug::LogWarning(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
} // end anonymous namespace
