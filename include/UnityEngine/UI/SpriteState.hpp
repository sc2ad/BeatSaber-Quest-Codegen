// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: SpriteState
  struct SpriteState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SpriteState, "UnityEngine.UI", "SpriteState");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.SpriteState
  // [TokenAttribute] Offset: FFFFFFFF
  struct SpriteState/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UI::SpriteState>*/ {
    public:
    public:
    // private UnityEngine.Sprite m_HighlightedSprite
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Sprite* m_HighlightedSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite m_PressedSprite
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::Sprite* m_PressedSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10C252C
    // private UnityEngine.Sprite m_SelectedSprite
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Sprite* m_SelectedSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite m_DisabledSprite
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Sprite* m_DisabledSprite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Creating value type constructor for type: SpriteState
    constexpr SpriteState(::UnityEngine::Sprite* m_HighlightedSprite_ = {}, ::UnityEngine::Sprite* m_PressedSprite_ = {}, ::UnityEngine::Sprite* m_SelectedSprite_ = {}, ::UnityEngine::Sprite* m_DisabledSprite_ = {}) noexcept : m_HighlightedSprite{m_HighlightedSprite_}, m_PressedSprite{m_PressedSprite_}, m_SelectedSprite{m_SelectedSprite_}, m_DisabledSprite{m_DisabledSprite_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UI::SpriteState>
    operator ::System::IEquatable_1<::UnityEngine::UI::SpriteState>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UI::SpriteState>*>(this);
    }
    // Creating interface conversion operator: i_SpriteState
    inline ::System::IEquatable_1<::UnityEngine::UI::SpriteState>* i_SpriteState() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::UI::SpriteState>*>(this);
    }
    // Get instance field reference: private UnityEngine.Sprite m_HighlightedSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_HighlightedSprite();
    // Get instance field reference: private UnityEngine.Sprite m_PressedSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_PressedSprite();
    // Get instance field reference: private UnityEngine.Sprite m_SelectedSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_SelectedSprite();
    // Get instance field reference: private UnityEngine.Sprite m_DisabledSprite
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn_m_DisabledSprite();
    // public UnityEngine.Sprite get_highlightedSprite()
    // Offset: 0x2B196F0
    ::UnityEngine::Sprite* get_highlightedSprite();
    // public System.Void set_highlightedSprite(UnityEngine.Sprite value)
    // Offset: 0x2B196F8
    void set_highlightedSprite(::UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_pressedSprite()
    // Offset: 0x2B19700
    ::UnityEngine::Sprite* get_pressedSprite();
    // public System.Void set_pressedSprite(UnityEngine.Sprite value)
    // Offset: 0x2B19708
    void set_pressedSprite(::UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_selectedSprite()
    // Offset: 0x2B19710
    ::UnityEngine::Sprite* get_selectedSprite();
    // public System.Void set_selectedSprite(UnityEngine.Sprite value)
    // Offset: 0x2B19718
    void set_selectedSprite(::UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_disabledSprite()
    // Offset: 0x2B19720
    ::UnityEngine::Sprite* get_disabledSprite();
    // public System.Void set_disabledSprite(UnityEngine.Sprite value)
    // Offset: 0x2B19728
    void set_disabledSprite(::UnityEngine::Sprite* value);
    // public System.Boolean Equals(UnityEngine.UI.SpriteState other)
    // Offset: 0x2B19730
    bool Equals(::UnityEngine::UI::SpriteState other);
  }; // UnityEngine.UI.SpriteState
  #pragma pack(pop)
  static check_size<sizeof(SpriteState), 24 + sizeof(::UnityEngine::Sprite*)> __UnityEngine_UI_SpriteStateSizeCheck;
  static_assert(sizeof(SpriteState) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_highlightedSprite
// Il2CppName: get_highlightedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::UI::SpriteState::*)()>(&UnityEngine::UI::SpriteState::get_highlightedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "get_highlightedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_highlightedSprite
// Il2CppName: set_highlightedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::SpriteState::*)(::UnityEngine::Sprite*)>(&UnityEngine::UI::SpriteState::set_highlightedSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "set_highlightedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_pressedSprite
// Il2CppName: get_pressedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::UI::SpriteState::*)()>(&UnityEngine::UI::SpriteState::get_pressedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "get_pressedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_pressedSprite
// Il2CppName: set_pressedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::SpriteState::*)(::UnityEngine::Sprite*)>(&UnityEngine::UI::SpriteState::set_pressedSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "set_pressedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_selectedSprite
// Il2CppName: get_selectedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::UI::SpriteState::*)()>(&UnityEngine::UI::SpriteState::get_selectedSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "get_selectedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_selectedSprite
// Il2CppName: set_selectedSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::SpriteState::*)(::UnityEngine::Sprite*)>(&UnityEngine::UI::SpriteState::set_selectedSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "set_selectedSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::get_disabledSprite
// Il2CppName: get_disabledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (UnityEngine::UI::SpriteState::*)()>(&UnityEngine::UI::SpriteState::get_disabledSprite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "get_disabledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::set_disabledSprite
// Il2CppName: set_disabledSprite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::SpriteState::*)(::UnityEngine::Sprite*)>(&UnityEngine::UI::SpriteState::set_disabledSprite)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "set_disabledSprite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::SpriteState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::SpriteState::*)(::UnityEngine::UI::SpriteState)>(&UnityEngine::UI::SpriteState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "SpriteState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::SpriteState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
