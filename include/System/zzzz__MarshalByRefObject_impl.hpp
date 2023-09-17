#pragma once
namespace {
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ServerIdentity_def.hpp"
//  Writing Method size for method: ::System::MarshalByRefObject._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2485910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.get_ObjectIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ServerIdentity (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::get_ObjectIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x248bff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "get_ObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.set_ObjectIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MarshalByRefObject::*)(::System::Runtime::Remoting::ServerIdentity)>(&::System::MarshalByRefObject::set_ObjectIdentity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x248c034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "set_ObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.CreateObjRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::ObjRef (::System::MarshalByRefObject::*)(::System::Type)>(&::System::MarshalByRefObject::CreateObjRef)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x248c074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::MarshalByRefObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MarshalByRefObject.InitializeLifetimeService
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::MarshalByRefObject::*)()>(&::System::MarshalByRefObject::InitializeLifetimeService)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x248c0b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::MarshalByRefObject),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::MarshalByRefObject::__set__identity(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::System::MarshalByRefObject::__get__identity() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::MarshalByRefObject::MarshalByRefObject()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MarshalByRefObject>())) {}
 void ::System::MarshalByRefObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Runtime::Remoting::ServerIdentity ::System::MarshalByRefObject::get_ObjectIdentity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "get_ObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ServerIdentity, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::MarshalByRefObject::set_ObjectIdentity(::System::Runtime::Remoting::ServerIdentity value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "set_ObjectIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ServerIdentity>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::System::Runtime::Remoting::ObjRef ::System::MarshalByRefObject::CreateObjRef(::System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "CreateObjRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::ObjRef, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 ::bs_hook::Il2CppWrapperType ::System::MarshalByRefObject::InitializeLifetimeService()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MarshalByRefObject>::get(),
                            "InitializeLifetimeService",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
