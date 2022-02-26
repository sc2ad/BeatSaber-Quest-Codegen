// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISelectHandler
#include "UnityEngine/EventSystems/ISelectHandler.hpp"
// Including type: UnityEngine.EventSystems.IDeselectHandler
#include "UnityEngine/EventSystems/IDeselectHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_ScrollbarEventHandler
  class TMP_ScrollbarEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_ScrollbarEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_ScrollbarEventHandler*, "TMPro", "TMP_ScrollbarEventHandler");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_ScrollbarEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_ScrollbarEventHandler : public ::UnityEngine::MonoBehaviour/*, public ::UnityEngine::EventSystems::IPointerClickHandler, public ::UnityEngine::EventSystems::ISelectHandler, public ::UnityEngine::EventSystems::IDeselectHandler*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Boolean isSelected
    // Size: 0x1
    // Offset: 0x18
    bool isSelected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerClickHandler
    operator ::UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::ISelectHandler
    operator ::UnityEngine::EventSystems::ISelectHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::ISelectHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IDeselectHandler
    operator ::UnityEngine::EventSystems::IDeselectHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IDeselectHandler*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean isSelected
    bool& dyn_isSelected();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1454588
    void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSelect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x14545F4
    void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnDeselect(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1454670
    void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x14546E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_ScrollbarEventHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_ScrollbarEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_ScrollbarEventHandler*, creationType>()));
    }
  }; // TMPro.TMP_ScrollbarEventHandler
  #pragma pack(pop)
  static check_size<sizeof(TMP_ScrollbarEventHandler), 24 + sizeof(bool)> __TMPro_TMP_ScrollbarEventHandlerSizeCheck;
  static_assert(sizeof(TMP_ScrollbarEventHandler) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnPointerClick
// Il2CppName: OnPointerClick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnPointerClick)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnPointerClick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnSelect
// Il2CppName: OnSelect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnSelect)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnSelect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::OnDeselect
// Il2CppName: OnDeselect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_ScrollbarEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&TMPro::TMP_ScrollbarEventHandler::OnDeselect)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "BaseEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_ScrollbarEventHandler*), "OnDeselect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_ScrollbarEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
