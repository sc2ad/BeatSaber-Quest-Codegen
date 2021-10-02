// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HAPI_PDG_WorkitemState
  // [TokenAttribute] Offset: FFFFFFFF
  struct HAPI_PDG_WorkitemState/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HAPI_PDG_WorkitemState
    constexpr HAPI_PDG_WorkitemState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNDEFINED
    static constexpr const int HAPI_PDG_WORKITEM_UNDEFINED = 0;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNDEFINED
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_UNDEFINED();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNDEFINED
    static void _set_HAPI_PDG_WORKITEM_UNDEFINED(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNCOOKED
    static constexpr const int HAPI_PDG_WORKITEM_UNCOOKED = 1;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNCOOKED
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_UNCOOKED();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_UNCOOKED
    static void _set_HAPI_PDG_WORKITEM_UNCOOKED(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_WAITING
    static constexpr const int HAPI_PDG_WORKITEM_WAITING = 2;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_WAITING
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_WAITING();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_WAITING
    static void _set_HAPI_PDG_WORKITEM_WAITING(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_SCHEDULED
    static constexpr const int HAPI_PDG_WORKITEM_SCHEDULED = 3;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_SCHEDULED
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_SCHEDULED();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_SCHEDULED
    static void _set_HAPI_PDG_WORKITEM_SCHEDULED(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKING
    static constexpr const int HAPI_PDG_WORKITEM_COOKING = 4;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKING
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_COOKING();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKING
    static void _set_HAPI_PDG_WORKITEM_COOKING(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_SUCCESS
    static constexpr const int HAPI_PDG_WORKITEM_COOKED_SUCCESS = 5;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_SUCCESS
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_COOKED_SUCCESS();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_SUCCESS
    static void _set_HAPI_PDG_WORKITEM_COOKED_SUCCESS(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CACHE
    static constexpr const int HAPI_PDG_WORKITEM_COOKED_CACHE = 6;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CACHE
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_COOKED_CACHE();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CACHE
    static void _set_HAPI_PDG_WORKITEM_COOKED_CACHE(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_FAIL
    static constexpr const int HAPI_PDG_WORKITEM_COOKED_FAIL = 7;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_FAIL
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_COOKED_FAIL();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_FAIL
    static void _set_HAPI_PDG_WORKITEM_COOKED_FAIL(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CANCEL
    static constexpr const int HAPI_PDG_WORKITEM_COOKED_CANCEL = 8;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CANCEL
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_COOKED_CANCEL();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_COOKED_CANCEL
    static void _set_HAPI_PDG_WORKITEM_COOKED_CANCEL(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // static field const value: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_DIRTY
    static constexpr const int HAPI_PDG_WORKITEM_DIRTY = 9;
    // Get static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_DIRTY
    static HoudiniEngineUnity::HAPI_PDG_WorkitemState _get_HAPI_PDG_WORKITEM_DIRTY();
    // Set static field: static public HoudiniEngineUnity.HAPI_PDG_WorkitemState HAPI_PDG_WORKITEM_DIRTY
    static void _set_HAPI_PDG_WORKITEM_DIRTY(HoudiniEngineUnity::HAPI_PDG_WorkitemState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // HoudiniEngineUnity.HAPI_PDG_WorkitemState
  #pragma pack(pop)
  static check_size<sizeof(HAPI_PDG_WorkitemState), 0 + sizeof(int)> __HoudiniEngineUnity_HAPI_PDG_WorkitemStateSizeCheck;
  static_assert(sizeof(HAPI_PDG_WorkitemState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PDG_WorkitemState, "HoudiniEngineUnity", "HAPI_PDG_WorkitemState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
