#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapFieldAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute.get_XmlElementName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            "get_XmlElementName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute.IsInteropXmlElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2339a80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            "IsInteropXmlElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Remoting::Metadata::SoapFieldAttribute.SetReflectionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapFieldAttribute::*)(::bs_hook::Il2CppWrapperType)>(&System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2339a88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Runtime::Remoting::Metadata::SoapFieldAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__set__elementName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Remoting::Metadata::SoapFieldAttribute::__get__elementName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Remoting::Metadata::SoapFieldAttribute::__set__isElement(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Remoting::Metadata::SoapFieldAttribute::__get__isElement() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 System::Runtime::Remoting::Metadata::SoapFieldAttribute::SoapFieldAttribute()  : System::Runtime::Remoting::Metadata::SoapAttribute(THROW_UNLESS(::il2cpp_utils::New<SoapFieldAttribute>())) {}
 void System::Runtime::Remoting::Metadata::SoapFieldAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Runtime::Remoting::Metadata::SoapFieldAttribute::get_XmlElementName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            "get_XmlElementName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Runtime::Remoting::Metadata::SoapFieldAttribute::IsInteropXmlElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            "IsInteropXmlElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Runtime::Remoting::Metadata::SoapFieldAttribute::SetReflectionObject(::bs_hook::Il2CppWrapperType reflectionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Remoting::Metadata::SoapFieldAttribute>::get(),
                            "SetReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reflectionObject);
}
