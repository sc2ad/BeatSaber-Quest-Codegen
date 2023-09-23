#pragma once
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)(System::Exception)>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x236d800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_BinaryStackTraceArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "get_BinaryStackTraceArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo.Capture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::ExceptionServices::ExceptionDispatchInfo (*)(System::Exception)>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x236d3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo.get_SourceException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "get_SourceException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x236d488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo.Throw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception)>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x236d938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__set_m_Exception(System::Exception value)  {
::cordl_internals::setInstanceField<System::Exception, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Exception>(value));
}
constexpr System::Exception System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_Exception() const {
return ::cordl_internals::getInstanceField<System::Exception, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::ExceptionServices::ExceptionDispatchInfo::__set_m_stackTrace(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType System::Runtime::ExceptionServices::ExceptionDispatchInfo::__get_m_stackTrace() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
 System::Runtime::ExceptionServices::ExceptionDispatchInfo::ExceptionDispatchInfo(System::Exception exception)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ExceptionDispatchInfo>(exception))) {}
 void System::Runtime::ExceptionServices::ExceptionDispatchInfo::_ctor(System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception);
}
 ::bs_hook::Il2CppWrapperType System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "get_BinaryStackTraceArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Runtime::ExceptionServices::ExceptionDispatchInfo System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture(System::Exception source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Capture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::ExceptionServices::ExceptionDispatchInfo, false>(nullptr, ___internal_method, source);
}
 System::Exception System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "get_SourceException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw(System::Exception source)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::ExceptionServices::ExceptionDispatchInfo>::get(),
                            "Throw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source);
}
