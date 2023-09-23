#pragma once
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
//  Writing Method size for method: VRUIControls::MouseButtonEventData.PressedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseButtonEventData::*)()>(&VRUIControls::MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d3acb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            "PressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::MouseButtonEventData.ReleasedThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (VRUIControls::MouseButtonEventData::*)()>(&VRUIControls::MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d3acc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            "ReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: VRUIControls::MouseButtonEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VRUIControls::MouseButtonEventData::*)()>(&VRUIControls::MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d3acd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void VRUIControls::MouseButtonEventData::__set_buttonState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState>(value));
}
constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState VRUIControls::MouseButtonEventData::__get_buttonState() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void VRUIControls::MouseButtonEventData::__set_buttonData(UnityEngine::EventSystems::PointerEventData value)  {
::cordl_internals::setInstanceField<UnityEngine::EventSystems::PointerEventData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::EventSystems::PointerEventData>(value));
}
constexpr UnityEngine::EventSystems::PointerEventData VRUIControls::MouseButtonEventData::__get_buttonData() const {
return ::cordl_internals::getInstanceField<UnityEngine::EventSystems::PointerEventData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool VRUIControls::MouseButtonEventData::PressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            "PressedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool VRUIControls::MouseButtonEventData::ReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            "ReleasedThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 VRUIControls::MouseButtonEventData::MouseButtonEventData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MouseButtonEventData>())) {}
 void VRUIControls::MouseButtonEventData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<VRUIControls::MouseButtonEventData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
