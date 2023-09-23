#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__DemoGUIMessage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: RootMotion::DemoGUIMessage.OnGUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::DemoGUIMessage::*)()>(&RootMotion::DemoGUIMessage::OnGUI)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x11b2a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::DemoGUIMessage>::get(),
                            "OnGUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: RootMotion::DemoGUIMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::DemoGUIMessage::*)()>(&RootMotion::DemoGUIMessage::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x11b2b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::DemoGUIMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::DemoGUIMessage::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW RootMotion::DemoGUIMessage::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void RootMotion::DemoGUIMessage::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color RootMotion::DemoGUIMessage::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void RootMotion::DemoGUIMessage::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::DemoGUIMessage>::get(),
                            "OnGUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 RootMotion::DemoGUIMessage::DemoGUIMessage()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<DemoGUIMessage>())) {}
 void RootMotion::DemoGUIMessage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RootMotion::DemoGUIMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
