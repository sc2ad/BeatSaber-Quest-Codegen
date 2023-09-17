#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
namespace {
#include "System/Runtime/Remoting/Metadata/zzzz__SoapMethodAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_UseAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339b30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_XmlNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339b38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.SetReflectionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)(::bs_hook::Il2CppWrapperType)>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2339b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Metadata::SoapMethodAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseElement(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseElement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseNamespace(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__returnElement(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__returnElement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__soapAction(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__soapAction() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__useAttribute(bool value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__useAttribute() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__namespace(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__namespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SoapMethodAttribute()  : ::System::Runtime::Remoting::Metadata::SoapAttribute(THROW_UNLESS(::il2cpp_utils::New<SoapMethodAttribute>())) {}
 void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                            "get_UseAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                            "get_XmlNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute>::get(),
                            "SetReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reflectionObject);
}
} // end anonymous namespace
