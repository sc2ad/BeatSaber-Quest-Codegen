// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LeaderboardTableCell
  class LeaderboardTableCell;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LeaderboardTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardTableCell
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardTableCell : public ::HMUI::TableCell {
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
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x58
    ::TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _playerNameText
    // Size: 0x8
    // Offset: 0x60
    ::TMPro::TextMeshProUGUI* playerNameText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x68
    ::TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _fullComboText
    // Size: 0x8
    // Offset: 0x70
    ::TMPro::TextMeshProUGUI* fullComboText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x78
    ::UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _specialScoreColor
    // Size: 0x10
    // Offset: 0x88
    ::UnityEngine::Color specialScoreColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.UI.Image _separatorImage
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::UI::Image* separatorImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    public:
    // Get instance field reference: private TMPro.TextMeshProUGUI _rankText
    ::TMPro::TextMeshProUGUI*& dyn__rankText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _playerNameText
    ::TMPro::TextMeshProUGUI*& dyn__playerNameText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _scoreText
    ::TMPro::TextMeshProUGUI*& dyn__scoreText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _fullComboText
    ::TMPro::TextMeshProUGUI*& dyn__fullComboText();
    // Get instance field reference: private UnityEngine.Color _normalColor
    ::UnityEngine::Color& dyn__normalColor();
    // Get instance field reference: private UnityEngine.Color _specialScoreColor
    ::UnityEngine::Color& dyn__specialScoreColor();
    // Get instance field reference: private UnityEngine.UI.Image _separatorImage
    ::UnityEngine::UI::Image*& dyn__separatorImage();
    // public System.Void set_rank(System.Int32 value)
    // Offset: 0x13B7910
    void set_rank(int value);
    // public System.Void set_playerName(System.String value)
    // Offset: 0x13B7954
    void set_playerName(::StringW value);
    // public System.Void set_score(System.Int32 value)
    // Offset: 0x13B7970
    void set_score(int value);
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0x13B7A14
    void set_showSeparator(bool value);
    // public System.Void set_showFullCombo(System.Boolean value)
    // Offset: 0x13B7A34
    void set_showFullCombo(bool value);
    // public System.Void set_specialScore(System.Boolean value)
    // Offset: 0x13B7A54
    void set_specialScore(bool value);
    // public System.Void .ctor()
    // Offset: 0x13B7B58
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LeaderboardTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardTableCell*, creationType>()));
    }
  }; // LeaderboardTableCell
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardTableCell), 152 + sizeof(::UnityEngine::UI::Image*)> __GlobalNamespace_LeaderboardTableCellSizeCheck;
  static_assert(sizeof(LeaderboardTableCell) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_rank
// Il2CppName: set_rank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(int)>(&GlobalNamespace::LeaderboardTableCell::set_rank)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_rank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_playerName
// Il2CppName: set_playerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(::StringW)>(&GlobalNamespace::LeaderboardTableCell::set_playerName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_playerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_score
// Il2CppName: set_score
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(int)>(&GlobalNamespace::LeaderboardTableCell::set_score)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_score", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_showSeparator
// Il2CppName: set_showSeparator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_showSeparator)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_showSeparator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_showFullCombo
// Il2CppName: set_showFullCombo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_showFullCombo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_showFullCombo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::set_specialScore
// Il2CppName: set_specialScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardTableCell::*)(bool)>(&GlobalNamespace::LeaderboardTableCell::set_specialScore)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardTableCell*), "set_specialScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardTableCell::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
