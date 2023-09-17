#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
namespace {
#include "System/Xml/zzzz__XmlNodeChangedEventArgs_def.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeChangedEventArgs::*)(::System::Xml::XmlNode, ::System::Xml::XmlNode, ::System::Xml::XmlNode, ::StringW, ::StringW, ::System::Xml::XmlNodeChangedAction)>(&::System::Xml::XmlNodeChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26fde18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeChangedEventArgs.get_Action
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeChangedAction (::System::Xml::XmlNodeChangedEventArgs::*)()>(&::System::Xml::XmlNodeChangedEventArgs::get_Action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26fdeb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs>::get(),
                            "get_Action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_action(::System::Xml::XmlNodeChangedAction value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNodeChangedAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlNodeChangedAction>(value));
}
constexpr ::System::Xml::XmlNodeChangedAction ::System::Xml::XmlNodeChangedEventArgs::__get_action() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNodeChangedAction, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_node(::System::Xml::XmlNode value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlNode>(value));
}
constexpr ::System::Xml::XmlNode ::System::Xml::XmlNodeChangedEventArgs::__get_node() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_oldParent(::System::Xml::XmlNode value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlNode>(value));
}
constexpr ::System::Xml::XmlNode ::System::Xml::XmlNodeChangedEventArgs::__get_oldParent() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_newParent(::System::Xml::XmlNode value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::XmlNode>(value));
}
constexpr ::System::Xml::XmlNode ::System::Xml::XmlNodeChangedEventArgs::__get_newParent() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_oldValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::XmlNodeChangedEventArgs::__get_oldValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Xml::XmlNodeChangedEventArgs::__set_newValue(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Xml::XmlNodeChangedEventArgs::__get_newValue() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "node", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "oldParent", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "newParent", ty: "::System::Xml::XmlNode", modifiers: "", def_value: None }, CppParam { name: "oldValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "newValue", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Xml::XmlNodeChangedAction", modifiers: "", def_value: None }]
 ::System::Xml::XmlNodeChangedEventArgs::XmlNodeChangedEventArgs(::System::Xml::XmlNode node, ::System::Xml::XmlNode oldParent, ::System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action)  : ::System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<XmlNodeChangedEventArgs>(node, oldParent, newParent, oldValue, newValue, action))) {}
 void ::System::Xml::XmlNodeChangedEventArgs::_ctor(::System::Xml::XmlNode node, ::System::Xml::XmlNode oldParent, ::System::Xml::XmlNode newParent, ::StringW oldValue, ::StringW newValue, ::System::Xml::XmlNodeChangedAction action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeChangedAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, node, oldParent, newParent, oldValue, newValue, action);
}
 ::System::Xml::XmlNodeChangedAction ::System::Xml::XmlNodeChangedEventArgs::get_Action()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeChangedEventArgs>::get(),
                            "get_Action",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeChangedAction, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
