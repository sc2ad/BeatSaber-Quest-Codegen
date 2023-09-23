#pragma once
#include "System/Runtime/Remoting/zzzz__Identity_impl.hpp"
#include "System/Runtime/Remoting/zzzz__ClientIdentity_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::ClientIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientIdentity::*)(::StringW, System::Runtime::Remoting::ObjRef)>(&System::Runtime::Remoting::ClientIdentity::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x231a008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientIdentity.get_ClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::MarshalByRefObject (System::Runtime::Remoting::ClientIdentity::*)()>(&System::Runtime::Remoting::ClientIdentity::get_ClientProxy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x231a110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "get_ClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientIdentity.set_ClientProxy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::ClientIdentity::*)(System::MarshalByRefObject)>(&System::Runtime::Remoting::ClientIdentity::set_ClientProxy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x231a198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "set_ClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientIdentity.CreateObjRef
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::ObjRef (System::Runtime::Remoting::ClientIdentity::*)(System::Type)>(&System::Runtime::Remoting::ClientIdentity::CreateObjRef)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231a208;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::ClientIdentity),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::ClientIdentity.get_TargetUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ClientIdentity::*)()>(&System::Runtime::Remoting::ClientIdentity::get_TargetUri)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x231a210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "get_TargetUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::ClientIdentity::__set__proxyReference(System::WeakReference value)  {
::cordl_internals::setInstanceField<System::WeakReference, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::WeakReference>(value));
}
constexpr System::WeakReference System::Runtime::Remoting::ClientIdentity::__get__proxyReference() const {
return ::cordl_internals::getInstanceField<System::WeakReference, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "objectUri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "objRef", ty: "System::Runtime::Remoting::ObjRef", modifiers: "", def_value: None }]
 System::Runtime::Remoting::ClientIdentity::ClientIdentity(::StringW objectUri, System::Runtime::Remoting::ObjRef objRef)  : System::Runtime::Remoting::Identity(THROW_UNLESS(::il2cpp_utils::New<ClientIdentity>(objectUri, objRef))) {}
 void System::Runtime::Remoting::ClientIdentity::_ctor(::StringW objectUri, System::Runtime::Remoting::ObjRef objRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::Remoting::ObjRef>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectUri, objRef);
}
 System::MarshalByRefObject System::Runtime::Remoting::ClientIdentity::get_ClientProxy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "get_ClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::MarshalByRefObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Remoting::ClientIdentity::set_ClientProxy(System::MarshalByRefObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "set_ClientProxy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::MarshalByRefObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Runtime::Remoting::ObjRef System::Runtime::Remoting::ClientIdentity::CreateObjRef(System::Type requestedType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "CreateObjRef",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Runtime::Remoting::ObjRef, false>(const_cast<void*>(instance), ___internal_method, requestedType);
}
 ::StringW System::Runtime::Remoting::ClientIdentity::get_TargetUri()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::ClientIdentity>::get(),
                            "get_TargetUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
