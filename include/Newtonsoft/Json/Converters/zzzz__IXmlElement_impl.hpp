#pragma once
namespace {
#include "Newtonsoft/Json/Converters/zzzz__IXmlElement_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlElement.SetAttributeNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Converters::IXmlElement::*)(::Newtonsoft::Json::Converters::IXmlNode)>(&::Newtonsoft::Json::Converters::IXmlElement::SetAttributeNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Converters::IXmlElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlElement.GetPrefixOfNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Converters::IXmlElement::*)(::StringW)>(&::Newtonsoft::Json::Converters::IXmlElement::GetPrefixOfNamespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Converters::IXmlElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::IXmlElement.get_IsEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Converters::IXmlElement::*)()>(&::Newtonsoft::Json::Converters::IXmlElement::get_IsEmpty)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Converters::IXmlElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Newtonsoft::Json::Converters::IXmlNode
constexpr  ::Newtonsoft::Json::Converters::IXmlElement::operator ::Newtonsoft::Json::Converters::IXmlNode() const noexcept {
return ::Newtonsoft::Json::Converters::IXmlNode(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Newtonsoft::Json::Converters::IXmlElement::SetAttributeNode(::Newtonsoft::Json::Converters::IXmlNode attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                            "SetAttributeNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Converters::IXmlNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attribute);
}
 ::StringW ::Newtonsoft::Json::Converters::IXmlElement::GetPrefixOfNamespace(::StringW namespaceUri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                            "GetPrefixOfNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, namespaceUri);
}
 bool ::Newtonsoft::Json::Converters::IXmlElement::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Converters::IXmlElement>::get(),
                            "get_IsEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
