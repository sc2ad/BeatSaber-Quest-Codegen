#pragma once
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::DropdownMenuEventInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DropdownMenuEventInfo::*)(UnityEngine::UIElements::EventBase)>(&UnityEngine::UIElements::DropdownMenuEventInfo::_ctor)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2c8f93c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownMenuEventInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__modifiers_k__BackingField(UnityEngine::EventModifiers value)  {
::cordl_internals::setInstanceField<UnityEngine::EventModifiers, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventModifiers>(value));
}
constexpr UnityEngine::EventModifiers UnityEngine::UIElements::DropdownMenuEventInfo::__get__modifiers_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventModifiers, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__mousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::DropdownMenuEventInfo::__get__mousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__localMousePosition_k__BackingField(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UIElements::DropdownMenuEventInfo::__get__localMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__character_k__BackingField(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<char16_t>(value));
}
constexpr char16_t UnityEngine::UIElements::DropdownMenuEventInfo::__get__character_k__BackingField() const {
return ::cordl_internals::getInstanceField<char16_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UIElements::DropdownMenuEventInfo::__set__keyCode_k__BackingField(UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<UnityEngine::KeyCode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::KeyCode>(value));
}
constexpr UnityEngine::KeyCode UnityEngine::UIElements::DropdownMenuEventInfo::__get__keyCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<UnityEngine::KeyCode, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::UIElements::DropdownMenuEventInfo UnityEngine::UIElements::DropdownMenuEventInfo::New_ctor(UnityEngine::UIElements::EventBase e)  {
UnityEngine::UIElements::DropdownMenuEventInfo o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::UIElements::DropdownMenuEventInfo>(e))};
return o;
}
 void UnityEngine::UIElements::DropdownMenuEventInfo::_ctor(UnityEngine::UIElements::EventBase e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::DropdownMenuEventInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::EventBase>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, e);
}
