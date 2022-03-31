// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: FloorType because it is already included!
  // Skipping declaration: CeilingType because it is already included!
  // Skipping declaration: TrackLaneType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentSizeData
  class EnvironmentSizeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentSizeData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData*, "", "EnvironmentSizeData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSizeData
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentSizeData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::EnvironmentSizeData::FloorType
    struct FloorType;
    // Nested type: ::GlobalNamespace::EnvironmentSizeData::CeilingType
    struct CeilingType;
    // Nested type: ::GlobalNamespace::EnvironmentSizeData::TrackLaneType
    struct TrackLaneType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentSizeData/FloorType
    // [TokenAttribute] Offset: FFFFFFFF
    struct FloorType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: FloorType
      constexpr FloorType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EnvironmentSizeData/FloorType NoFloor
      static constexpr const int NoFloor = 0;
      // Get static field: static public EnvironmentSizeData/FloorType NoFloor
      static ::GlobalNamespace::EnvironmentSizeData::FloorType _get_NoFloor();
      // Set static field: static public EnvironmentSizeData/FloorType NoFloor
      static void _set_NoFloor(::GlobalNamespace::EnvironmentSizeData::FloorType value);
      // static field const value: static public EnvironmentSizeData/FloorType CloseTo0
      static constexpr const int CloseTo0 = 1;
      // Get static field: static public EnvironmentSizeData/FloorType CloseTo0
      static ::GlobalNamespace::EnvironmentSizeData::FloorType _get_CloseTo0();
      // Set static field: static public EnvironmentSizeData/FloorType CloseTo0
      static void _set_CloseTo0(::GlobalNamespace::EnvironmentSizeData::FloorType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EnvironmentSizeData/FloorType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentSizeData::FloorType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentSizeData_FloorTypeSizeCheck;
    static_assert(sizeof(EnvironmentSizeData::FloorType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentSizeData/CeilingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct CeilingType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CeilingType
      constexpr CeilingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EnvironmentSizeData/CeilingType NoCeiling
      static constexpr const int NoCeiling = 0;
      // Get static field: static public EnvironmentSizeData/CeilingType NoCeiling
      static ::GlobalNamespace::EnvironmentSizeData::CeilingType _get_NoCeiling();
      // Set static field: static public EnvironmentSizeData/CeilingType NoCeiling
      static void _set_NoCeiling(::GlobalNamespace::EnvironmentSizeData::CeilingType value);
      // static field const value: static public EnvironmentSizeData/CeilingType LowCeiling
      static constexpr const int LowCeiling = 1;
      // Get static field: static public EnvironmentSizeData/CeilingType LowCeiling
      static ::GlobalNamespace::EnvironmentSizeData::CeilingType _get_LowCeiling();
      // Set static field: static public EnvironmentSizeData/CeilingType LowCeiling
      static void _set_LowCeiling(::GlobalNamespace::EnvironmentSizeData::CeilingType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EnvironmentSizeData/CeilingType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentSizeData::CeilingType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentSizeData_CeilingTypeSizeCheck;
    static_assert(sizeof(EnvironmentSizeData::CeilingType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: EnvironmentSizeData/TrackLaneType
    // [TokenAttribute] Offset: FFFFFFFF
    struct TrackLaneType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TrackLaneType
      constexpr TrackLaneType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public EnvironmentSizeData/TrackLaneType None
      static constexpr const int None = 0;
      // Get static field: static public EnvironmentSizeData/TrackLaneType None
      static ::GlobalNamespace::EnvironmentSizeData::TrackLaneType _get_None();
      // Set static field: static public EnvironmentSizeData/TrackLaneType None
      static void _set_None(::GlobalNamespace::EnvironmentSizeData::TrackLaneType value);
      // static field const value: static public EnvironmentSizeData/TrackLaneType Normal
      static constexpr const int Normal = 1;
      // Get static field: static public EnvironmentSizeData/TrackLaneType Normal
      static ::GlobalNamespace::EnvironmentSizeData::TrackLaneType _get_Normal();
      // Set static field: static public EnvironmentSizeData/TrackLaneType Normal
      static void _set_Normal(::GlobalNamespace::EnvironmentSizeData::TrackLaneType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // EnvironmentSizeData/TrackLaneType
    #pragma pack(pop)
    static check_size<sizeof(EnvironmentSizeData::TrackLaneType), 0 + sizeof(int)> __GlobalNamespace_EnvironmentSizeData_TrackLaneTypeSizeCheck;
    static_assert(sizeof(EnvironmentSizeData::TrackLaneType) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private EnvironmentSizeData/FloorType _floorType
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::EnvironmentSizeData::FloorType floorType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSizeData::FloorType) == 0x4);
    // private EnvironmentSizeData/CeilingType _ceilingType
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::EnvironmentSizeData::CeilingType ceilingType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSizeData::CeilingType) == 0x4);
    // private EnvironmentSizeData/TrackLaneType _trackLaneType
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::EnvironmentSizeData::TrackLaneType trackLaneType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSizeData::TrackLaneType) == 0x4);
    public:
    // Get instance field reference: private EnvironmentSizeData/FloorType _floorType
    ::GlobalNamespace::EnvironmentSizeData::FloorType& dyn__floorType();
    // Get instance field reference: private EnvironmentSizeData/CeilingType _ceilingType
    ::GlobalNamespace::EnvironmentSizeData::CeilingType& dyn__ceilingType();
    // Get instance field reference: private EnvironmentSizeData/TrackLaneType _trackLaneType
    ::GlobalNamespace::EnvironmentSizeData::TrackLaneType& dyn__trackLaneType();
    // public EnvironmentSizeData/FloorType get_floorType()
    // Offset: 0x1385168
    ::GlobalNamespace::EnvironmentSizeData::FloorType get_floorType();
    // public EnvironmentSizeData/CeilingType get_ceilingType()
    // Offset: 0x1385170
    ::GlobalNamespace::EnvironmentSizeData::CeilingType get_ceilingType();
    // public EnvironmentSizeData/TrackLaneType get_trackLaneType()
    // Offset: 0x1385178
    ::GlobalNamespace::EnvironmentSizeData::TrackLaneType get_trackLaneType();
    // public System.Void .ctor()
    // Offset: 0x1385180
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSizeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentSizeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSizeData*, creationType>()));
    }
  }; // EnvironmentSizeData
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSizeData), 24 + sizeof(::GlobalNamespace::EnvironmentSizeData::TrackLaneType)> __GlobalNamespace_EnvironmentSizeDataSizeCheck;
  static_assert(sizeof(EnvironmentSizeData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData::TrackLaneType, "", "EnvironmentSizeData/TrackLaneType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData::CeilingType, "", "EnvironmentSizeData/CeilingType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSizeData::FloorType, "", "EnvironmentSizeData/FloorType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSizeData::get_floorType
// Il2CppName: get_floorType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData::FloorType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_floorType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSizeData*), "get_floorType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSizeData::get_ceilingType
// Il2CppName: get_ceilingType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData::CeilingType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_ceilingType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSizeData*), "get_ceilingType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSizeData::get_trackLaneType
// Il2CppName: get_trackLaneType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentSizeData::TrackLaneType (GlobalNamespace::EnvironmentSizeData::*)()>(&GlobalNamespace::EnvironmentSizeData::get_trackLaneType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSizeData*), "get_trackLaneType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSizeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
