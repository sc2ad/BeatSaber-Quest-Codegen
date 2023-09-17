#pragma once
namespace {
#include "System/Runtime/Remoting/Messaging/zzzz__CADObjRef_def.hpp"
#include "System/Runtime/Remoting/zzzz__ObjRef_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADObjRef._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADObjRef::*)(::System::Runtime::Remoting::ObjRef, int32_t)>(&::System::Runtime::Remoting::Messaging::CADObjRef::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x233b9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::Messaging::CADObjRef::__set_objref(::System::Runtime::Remoting::ObjRef value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::ObjRef, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Runtime::Remoting::ObjRef>(value));
}
constexpr ::System::Runtime::Remoting::ObjRef ::System::Runtime::Remoting::Messaging::CADObjRef::__get_objref() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::ObjRef, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADObjRef::__set_SourceDomain(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Remoting::Messaging::CADObjRef::__get_SourceDomain() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Messaging::CADObjRef::__set_TypeInfo(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::System::Runtime::Remoting::Messaging::CADObjRef::__get_TypeInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::System::Runtime::Remoting::ObjRef", modifiers: "", def_value: None }, CppParam { name: "sourceDomain", ty: "int32_t", modifiers: "", def_value: None }]
 ::System::Runtime::Remoting::Messaging::CADObjRef::CADObjRef(::System::Runtime::Remoting::ObjRef o, int32_t sourceDomain)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CADObjRef>(o, sourceDomain))) {}
 void ::System::Runtime::Remoting::Messaging::CADObjRef::_ctor(::System::Runtime::Remoting::ObjRef o, int32_t sourceDomain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADObjRef>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::ObjRef>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o, sourceDomain);
}
} // end anonymous namespace
