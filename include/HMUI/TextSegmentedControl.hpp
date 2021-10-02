// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: HMUI.SegmentedControl/HMUI.IDataSource
#include "HMUI/SegmentedControl_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSegmentedControlCell
  class TextSegmentedControlCell;
  // Forward declaring type: SegmentedControlCell
  class SegmentedControlCell;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.TextSegmentedControl
  // [TokenAttribute] Offset: FFFFFFFF
  class TextSegmentedControl : public HMUI::SegmentedControl/*, public HMUI::SegmentedControl::IDataSource*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Single _fontSize
    // Size: 0x4
    // Offset: 0x58
    float fontSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _overrideCellSize
    // Size: 0x1
    // Offset: 0x5C
    bool overrideCellSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideCellSize and: padding
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xEE1FE8
    // private System.Single _padding
    // Size: 0x4
    // Offset: 0x60
    float padding;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _hideCellBackground
    // Size: 0x1
    // Offset: 0x64
    bool hideCellBackground;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideCellBackground and: firstCellPrefab
    char __padding3[0x3] = {};
    // [SpaceAttribute] Offset: 0xEE20A0
    // private HMUI.TextSegmentedControlCell _firstCellPrefab
    // Size: 0x8
    // Offset: 0x68
    HMUI::TextSegmentedControlCell* firstCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControlCell*) == 0x8);
    // private HMUI.TextSegmentedControlCell _lastCellPrefab
    // Size: 0x8
    // Offset: 0x70
    HMUI::TextSegmentedControlCell* lastCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControlCell*) == 0x8);
    // private HMUI.TextSegmentedControlCell _singleCellPrefab
    // Size: 0x8
    // Offset: 0x78
    HMUI::TextSegmentedControlCell* singleCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControlCell*) == 0x8);
    // private HMUI.TextSegmentedControlCell _middleCellPrefab
    // Size: 0x8
    // Offset: 0x80
    HMUI::TextSegmentedControlCell* middleCellPrefab;
    // Field size check
    static_assert(sizeof(HMUI::TextSegmentedControlCell*) == 0x8);
    // [InjectAttribute] Offset: 0xEE2108
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x88
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<System.String> _texts
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* texts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator HMUI::SegmentedControl::IDataSource
    operator HMUI::SegmentedControl::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::SegmentedControl::IDataSource*>(this);
    }
    // Get instance field reference: private System.Single _fontSize
    float& dyn__fontSize();
    // Get instance field reference: private System.Boolean _overrideCellSize
    bool& dyn__overrideCellSize();
    // Get instance field reference: private System.Single _padding
    float& dyn__padding();
    // Get instance field reference: private System.Boolean _hideCellBackground
    bool& dyn__hideCellBackground();
    // Get instance field reference: private HMUI.TextSegmentedControlCell _firstCellPrefab
    HMUI::TextSegmentedControlCell*& dyn__firstCellPrefab();
    // Get instance field reference: private HMUI.TextSegmentedControlCell _lastCellPrefab
    HMUI::TextSegmentedControlCell*& dyn__lastCellPrefab();
    // Get instance field reference: private HMUI.TextSegmentedControlCell _singleCellPrefab
    HMUI::TextSegmentedControlCell*& dyn__singleCellPrefab();
    // Get instance field reference: private HMUI.TextSegmentedControlCell _middleCellPrefab
    HMUI::TextSegmentedControlCell*& dyn__middleCellPrefab();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    Zenject::DiContainer*& dyn__container();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.String> _texts
    System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*& dyn__texts();
    // public System.Void SetTexts(System.Collections.Generic.IReadOnlyList`1<System.String> texts)
    // Offset: 0x14200E8
    void SetTexts(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* texts);
    // public System.Int32 NumberOfCells()
    // Offset: 0x1420100
    int NumberOfCells();
    // public HMUI.SegmentedControlCell CellForCellNumber(System.Int32 cellNumber)
    // Offset: 0x14201BC
    HMUI::SegmentedControlCell* CellForCellNumber(int cellNumber);
    // private HMUI.TextSegmentedControlCell InstantiateCell(UnityEngine.Object prefab)
    // Offset: 0x142046C
    HMUI::TextSegmentedControlCell* InstantiateCell(UnityEngine::Object* prefab);
    // public System.Void .ctor()
    // Offset: 0x1420648
    // Implemented from: HMUI.SegmentedControl
    // Base method: System.Void SegmentedControl::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSegmentedControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::TextSegmentedControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSegmentedControl*, creationType>()));
    }
  }; // HMUI.TextSegmentedControl
  #pragma pack(pop)
  static check_size<sizeof(TextSegmentedControl), 144 + sizeof(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*)> __HMUI_TextSegmentedControlSizeCheck;
  static_assert(sizeof(TextSegmentedControl) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSegmentedControl*, "HMUI", "TextSegmentedControl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TextSegmentedControl::SetTexts
// Il2CppName: SetTexts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControl::*)(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*)>(&HMUI::TextSegmentedControl::SetTexts)> {
  static const MethodInfo* get() {
    static auto* texts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControl*), "SetTexts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{texts});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControl::NumberOfCells
// Il2CppName: NumberOfCells
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::TextSegmentedControl::*)()>(&HMUI::TextSegmentedControl::NumberOfCells)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControl*), "NumberOfCells", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControl::CellForCellNumber
// Il2CppName: CellForCellNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SegmentedControlCell* (HMUI::TextSegmentedControl::*)(int)>(&HMUI::TextSegmentedControl::CellForCellNumber)> {
  static const MethodInfo* get() {
    static auto* cellNumber = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControl*), "CellForCellNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cellNumber});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControl::InstantiateCell
// Il2CppName: InstantiateCell
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TextSegmentedControlCell* (HMUI::TextSegmentedControl::*)(UnityEngine::Object*)>(&HMUI::TextSegmentedControl::InstantiateCell)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSegmentedControl*), "InstantiateCell", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: HMUI::TextSegmentedControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
