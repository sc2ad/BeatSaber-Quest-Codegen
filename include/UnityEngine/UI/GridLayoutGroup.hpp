// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.LayoutGroup
#include "UnityEngine/UI/LayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: Corner because it is already included!
  // Skipping declaration: Axis because it is already included!
  // Skipping declaration: Constraint because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: GridLayoutGroup
  class GridLayoutGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::GridLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup*, "UnityEngine.UI", "GridLayoutGroup");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.GridLayoutGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 11E0A5C
  class GridLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
    public:
    // Nested type: ::UnityEngine::UI::GridLayoutGroup::Corner
    struct Corner;
    // Nested type: ::UnityEngine::UI::GridLayoutGroup::Axis
    struct Axis;
    // Nested type: ::UnityEngine::UI::GridLayoutGroup::Constraint
    struct Constraint;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner
    // [TokenAttribute] Offset: FFFFFFFF
    struct Corner/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Corner
      constexpr Corner(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperLeft
      static constexpr const int UpperLeft = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperLeft
      static ::UnityEngine::UI::GridLayoutGroup::Corner _get_UpperLeft();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperLeft
      static void _set_UpperLeft(::UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperRight
      static constexpr const int UpperRight = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperRight
      static ::UnityEngine::UI::GridLayoutGroup::Corner _get_UpperRight();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner UpperRight
      static void _set_UpperRight(::UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerLeft
      static constexpr const int LowerLeft = 2;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerLeft
      static ::UnityEngine::UI::GridLayoutGroup::Corner _get_LowerLeft();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerLeft
      static void _set_LowerLeft(::UnityEngine::UI::GridLayoutGroup::Corner value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerRight
      static constexpr const int LowerRight = 3;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerRight
      static ::UnityEngine::UI::GridLayoutGroup::Corner _get_LowerRight();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner LowerRight
      static void _set_LowerRight(::UnityEngine::UI::GridLayoutGroup::Corner value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Corner), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_CornerSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Corner) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis
    // [TokenAttribute] Offset: FFFFFFFF
    struct Axis/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Axis
      constexpr Axis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Horizontal
      static ::UnityEngine::UI::GridLayoutGroup::Axis _get_Horizontal();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Horizontal
      static void _set_Horizontal(::UnityEngine::UI::GridLayoutGroup::Axis value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Vertical
      static ::UnityEngine::UI::GridLayoutGroup::Axis _get_Vertical();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis Vertical
      static void _set_Vertical(::UnityEngine::UI::GridLayoutGroup::Axis value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Axis), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_AxisSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Axis) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint
    // [TokenAttribute] Offset: FFFFFFFF
    struct Constraint/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Constraint
      constexpr Constraint(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint Flexible
      static constexpr const int Flexible = 0;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint Flexible
      static ::UnityEngine::UI::GridLayoutGroup::Constraint _get_Flexible();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint Flexible
      static void _set_Flexible(::UnityEngine::UI::GridLayoutGroup::Constraint value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedColumnCount
      static constexpr const int FixedColumnCount = 1;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedColumnCount
      static ::UnityEngine::UI::GridLayoutGroup::Constraint _get_FixedColumnCount();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedColumnCount
      static void _set_FixedColumnCount(::UnityEngine::UI::GridLayoutGroup::Constraint value);
      // static field const value: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedRowCount
      static constexpr const int FixedRowCount = 2;
      // Get static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedRowCount
      static ::UnityEngine::UI::GridLayoutGroup::Constraint _get_FixedRowCount();
      // Set static field: static public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint FixedRowCount
      static void _set_FixedRowCount(::UnityEngine::UI::GridLayoutGroup::Constraint value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint
    #pragma pack(pop)
    static check_size<sizeof(GridLayoutGroup::Constraint), 0 + sizeof(int)> __UnityEngine_UI_GridLayoutGroup_ConstraintSizeCheck;
    static_assert(sizeof(GridLayoutGroup::Constraint) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner m_StartCorner
    // Size: 0x4
    // Offset: 0x58
    ::UnityEngine::UI::GridLayoutGroup::Corner m_StartCorner;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::GridLayoutGroup::Corner) == 0x4);
    // protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis m_StartAxis
    // Size: 0x4
    // Offset: 0x5C
    ::UnityEngine::UI::GridLayoutGroup::Axis m_StartAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::GridLayoutGroup::Axis) == 0x4);
    // protected UnityEngine.Vector2 m_CellSize
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Vector2 m_CellSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // protected UnityEngine.Vector2 m_Spacing
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Vector2 m_Spacing;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint m_Constraint
    // Size: 0x4
    // Offset: 0x70
    ::UnityEngine::UI::GridLayoutGroup::Constraint m_Constraint;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::GridLayoutGroup::Constraint) == 0x4);
    // protected System.Int32 m_ConstraintCount
    // Size: 0x4
    // Offset: 0x74
    int m_ConstraintCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner m_StartCorner
    ::UnityEngine::UI::GridLayoutGroup::Corner& dyn_m_StartCorner();
    // Get instance field reference: protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis m_StartAxis
    ::UnityEngine::UI::GridLayoutGroup::Axis& dyn_m_StartAxis();
    // Get instance field reference: protected UnityEngine.Vector2 m_CellSize
    ::UnityEngine::Vector2& dyn_m_CellSize();
    // Get instance field reference: protected UnityEngine.Vector2 m_Spacing
    ::UnityEngine::Vector2& dyn_m_Spacing();
    // Get instance field reference: protected UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint m_Constraint
    ::UnityEngine::UI::GridLayoutGroup::Constraint& dyn_m_Constraint();
    // Get instance field reference: protected System.Int32 m_ConstraintCount
    int& dyn_m_ConstraintCount();
    // public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner get_startCorner()
    // Offset: 0x1D8C608
    ::UnityEngine::UI::GridLayoutGroup::Corner get_startCorner();
    // public System.Void set_startCorner(UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Corner value)
    // Offset: 0x1D8C610
    void set_startCorner(::UnityEngine::UI::GridLayoutGroup::Corner value);
    // public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis get_startAxis()
    // Offset: 0x1D8C674
    ::UnityEngine::UI::GridLayoutGroup::Axis get_startAxis();
    // public System.Void set_startAxis(UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Axis value)
    // Offset: 0x1D8C67C
    void set_startAxis(::UnityEngine::UI::GridLayoutGroup::Axis value);
    // public UnityEngine.Vector2 get_cellSize()
    // Offset: 0x1D8C6E0
    ::UnityEngine::Vector2 get_cellSize();
    // public System.Void set_cellSize(UnityEngine.Vector2 value)
    // Offset: 0x1D8C6E8
    void set_cellSize(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_spacing()
    // Offset: 0x1D8C754
    ::UnityEngine::Vector2 get_spacing();
    // public System.Void set_spacing(UnityEngine.Vector2 value)
    // Offset: 0x1D8C75C
    void set_spacing(::UnityEngine::Vector2 value);
    // public UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint get_constraint()
    // Offset: 0x1D8C7C8
    ::UnityEngine::UI::GridLayoutGroup::Constraint get_constraint();
    // public System.Void set_constraint(UnityEngine.UI.GridLayoutGroup/UnityEngine.UI.Constraint value)
    // Offset: 0x1D8C7D0
    void set_constraint(::UnityEngine::UI::GridLayoutGroup::Constraint value);
    // public System.Int32 get_constraintCount()
    // Offset: 0x1D8C834
    int get_constraintCount();
    // public System.Void set_constraintCount(System.Int32 value)
    // Offset: 0x1D8C83C
    void set_constraintCount(int value);
    // private System.Void SetCellsAlongAxis(System.Int32 axis)
    // Offset: 0x1D8CD08
    void SetCellsAlongAxis(int axis);
    // protected System.Void .ctor()
    // Offset: 0x1D8C8D4
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::GridLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridLayoutGroup*, creationType>()));
    }
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1D8C980
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x1D8CB1C
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x1D8CD00
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x1D8D398
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical()
    void SetLayoutVertical();
  }; // UnityEngine.UI.GridLayoutGroup
  #pragma pack(pop)
  static check_size<sizeof(GridLayoutGroup), 116 + sizeof(int)> __UnityEngine_UI_GridLayoutGroupSizeCheck;
  static_assert(sizeof(GridLayoutGroup) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup::Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup::Axis, "UnityEngine.UI", "GridLayoutGroup/Axis");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GridLayoutGroup::Corner, "UnityEngine.UI", "GridLayoutGroup/Corner");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_startCorner
// Il2CppName: get_startCorner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup::Corner (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_startCorner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_startCorner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_startCorner
// Il2CppName: set_startCorner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup::Corner)>(&UnityEngine::UI::GridLayoutGroup::set_startCorner)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "GridLayoutGroup/Corner")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_startCorner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_startAxis
// Il2CppName: get_startAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup::Axis (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_startAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_startAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_startAxis
// Il2CppName: set_startAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup::Axis)>(&UnityEngine::UI::GridLayoutGroup::set_startAxis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "GridLayoutGroup/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_startAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_cellSize
// Il2CppName: get_cellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_cellSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_cellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_cellSize
// Il2CppName: set_cellSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::Vector2)>(&UnityEngine::UI::GridLayoutGroup::set_cellSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_cellSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_spacing
// Il2CppName: get_spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_spacing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_spacing
// Il2CppName: set_spacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::Vector2)>(&UnityEngine::UI::GridLayoutGroup::set_spacing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_spacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_constraint
// Il2CppName: get_constraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::GridLayoutGroup::Constraint (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_constraint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_constraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_constraint
// Il2CppName: set_constraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(::UnityEngine::UI::GridLayoutGroup::Constraint)>(&UnityEngine::UI::GridLayoutGroup::set_constraint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "GridLayoutGroup/Constraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_constraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::get_constraintCount
// Il2CppName: get_constraintCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::get_constraintCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "get_constraintCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::set_constraintCount
// Il2CppName: set_constraintCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(int)>(&UnityEngine::UI::GridLayoutGroup::set_constraintCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "set_constraintCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis
// Il2CppName: SetCellsAlongAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)(int)>(&UnityEngine::UI::GridLayoutGroup::SetCellsAlongAxis)> {
  static const MethodInfo* get() {
    static auto* axis = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "SetCellsAlongAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{axis});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal
// Il2CppName: CalculateLayoutInputHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "CalculateLayoutInputHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical
// Il2CppName: CalculateLayoutInputVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::CalculateLayoutInputVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "CalculateLayoutInputVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::GridLayoutGroup::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::GridLayoutGroup::*)()>(&UnityEngine::UI::GridLayoutGroup::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::GridLayoutGroup*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
