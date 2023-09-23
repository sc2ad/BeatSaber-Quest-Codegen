#pragma once
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: System::Xml::XmlLinkedNode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::XmlLinkedNode::*)(System::Xml::XmlDocument)>(&System::Xml::XmlLinkedNode::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26f46a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlDocument>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlLinkedNode.get_PreviousSibling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNode (System::Xml::XmlLinkedNode::*)()>(&System::Xml::XmlLinkedNode::get_PreviousSibling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26f6a34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlLinkedNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::XmlLinkedNode.get_NextSibling
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Xml::XmlNode (System::Xml::XmlLinkedNode::*)()>(&System::Xml::XmlLinkedNode::get_NextSibling)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26f6a9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::XmlLinkedNode),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlLinkedNode::__set_next(System::Xml::XmlLinkedNode value)  {
::cordl_internals::setInstanceField<System::Xml::XmlLinkedNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Xml::XmlLinkedNode>(value));
}
constexpr System::Xml::XmlLinkedNode System::Xml::XmlLinkedNode::__get_next() const {
return ::cordl_internals::getInstanceField<System::Xml::XmlLinkedNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "doc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }]
 System::Xml::XmlLinkedNode::XmlLinkedNode(System::Xml::XmlDocument doc)  : System::Xml::XmlNode(THROW_UNLESS(::il2cpp_utils::New<XmlLinkedNode>(doc))) {}
 void System::Xml::XmlLinkedNode::_ctor(System::Xml::XmlDocument doc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::XmlDocument>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, doc);
}
 System::Xml::XmlNode System::Xml::XmlLinkedNode::get_PreviousSibling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                            "get_PreviousSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNode, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Xml::XmlNode System::Xml::XmlLinkedNode::get_NextSibling()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::XmlLinkedNode>::get(),
                            "get_NextSibling",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Xml::XmlNode, false>(const_cast<void*>(instance), ___internal_method);
}
