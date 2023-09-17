#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct ____HoudiniEngineUnity__HEU_SessionSyncData__Status;
}
namespace HoudiniEngineUnity {
class HEU_SessionSyncData;
}
// Type: ::Status
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9730))
// CS Name: HoudiniEngineUnity.HEU_SessionSyncData::Status
struct CORDL_TYPE ____HoudiniEngineUnity__HEU_SessionSyncData__Status : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____HoudiniEngineUnity__HEU_SessionSyncData__Status(int32_t value__) noexcept;


                    constexpr ____HoudiniEngineUnity__HEU_SessionSyncData__Status(____HoudiniEngineUnity__HEU_SessionSyncData__Status const&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_SessionSyncData__Status(____HoudiniEngineUnity__HEU_SessionSyncData__Status&&) = default;
                    constexpr ____HoudiniEngineUnity__HEU_SessionSyncData__Status& operator=(____HoudiniEngineUnity__HEU_SessionSyncData__Status const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____HoudiniEngineUnity__HEU_SessionSyncData__Status& operator=(____HoudiniEngineUnity__HEU_SessionSyncData__Status&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____HoudiniEngineUnity__HEU_SessionSyncData__Status(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______HoudiniEngineUnity__HEU_SessionSyncData__Status_Unwrapped : int32_t {
__Stopped = 0,
__Started = 1,
__Connecting = 2,
__Initializing = 3,
__Connected = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______HoudiniEngineUnity__HEU_SessionSyncData__Status_Unwrapped () const noexcept {
return std::bit_cast<______HoudiniEngineUnity__HEU_SessionSyncData__Status_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Stopped offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status const Stopped;

/// @brief Field Started offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status const Started;

/// @brief Field Connecting offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status const Connecting;

/// @brief Field Initializing offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status const Initializing;

/// @brief Field Connected offset 0
static ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status const Connected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_SessionSyncData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9731))
// CS Name: HoudiniEngineUnity.HEU_SessionSyncData
class CORDL_TYPE HEU_SessionSyncData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Status = ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HEU_SessionSyncData() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: " const&", def_value: None }]
constexpr HEU_SessionSyncData(HEU_SessionSyncData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionSyncData", modifiers: "&&", def_value: None }]
constexpr HEU_SessionSyncData(HEU_SessionSyncData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionSyncData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_SessionSyncData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionSyncData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionSyncData& operator=(HEU_SessionSyncData&& o) noexcept = default;
  constexpr HEU_SessionSyncData& operator=(HEU_SessionSyncData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(int32_t value) ;

constexpr int32_t __get__status() const;

 float_t __declspec(property(get=__get__timeLastUpdate, put=__set__timeLastUpdate))  _timeLastUpdate;

constexpr void __set__timeLastUpdate(float_t value) ;

constexpr float_t __get__timeLastUpdate() const;

 float_t __declspec(property(get=__get__timeStartConnection, put=__set__timeStartConnection))  _timeStartConnection;

constexpr void __set__timeStartConnection(float_t value) ;

constexpr float_t __get__timeStartConnection() const;

 ::StringW __declspec(property(get=__get__newNodeName, put=__set__newNodeName))  _newNodeName;

constexpr void __set__newNodeName(::StringW value) ;

constexpr ::StringW __get__newNodeName() const;

 int32_t __declspec(property(get=__get__nodeTypeIndex, put=__set__nodeTypeIndex))  _nodeTypeIndex;

constexpr void __set__nodeTypeIndex(int32_t value) ;

constexpr int32_t __get__nodeTypeIndex() const;

 bool __declspec(property(get=__get__validForConnection, put=__set__validForConnection))  _validForConnection;

constexpr void __set__validForConnection(bool value) ;

constexpr bool __get__validForConnection() const;

 ::HoudiniEngineUnity::HAPI_Viewport __declspec(property(get=__get__viewportHAPI, put=__set__viewportHAPI))  _viewportHAPI;

constexpr void __set__viewportHAPI(::HoudiniEngineUnity::HAPI_Viewport value) ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport __get__viewportHAPI() const;

 ::HoudiniEngineUnity::HAPI_Viewport __declspec(property(get=__get__viewportLocal, put=__set__viewportLocal))  _viewportLocal;

constexpr void __set__viewportLocal(::HoudiniEngineUnity::HAPI_Viewport value) ;

constexpr ::HoudiniEngineUnity::HAPI_Viewport __get__viewportLocal() const;

 bool __declspec(property(get=__get__viewportJustUpdated, put=__set__viewportJustUpdated))  _viewportJustUpdated;

constexpr void __set__viewportJustUpdated(bool value) ;

constexpr bool __get__viewportJustUpdated() const;

 ::HoudiniEngineUnity::HAPI_SessionSyncInfo __declspec(property(get=__get__syncInfo, put=__set__syncInfo))  _syncInfo;

constexpr void __set__syncInfo(::HoudiniEngineUnity::HAPI_SessionSyncInfo value) ;

constexpr ::HoudiniEngineUnity::HAPI_SessionSyncInfo __get__syncInfo() const;


// Properties

 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status __declspec(property(get=get_SyncStatus, put=set_SyncStatus))  SyncStatus;


// Methods

/// @brief Method get_SyncStatus addr 0x2033b4c size 0x14 virtual false final false
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status get_SyncStatus() ;

/// @brief Method set_SyncStatus addr 0x2033b60 size 0xc virtual false final false
 void set_SyncStatus(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status value) ;

// Ctor Parameters []
explicit HEU_SessionSyncData() ;

/// @brief Method .ctor addr 0x2030ee0 size 0xac virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_SessionSyncData__Status, "HoudiniEngineUnity", "HEU_SessionSyncData/Status");
NEED_NO_BOX(::HoudiniEngineUnity::HEU_SessionSyncData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_SessionSyncData, "HoudiniEngineUnity", "HEU_SessionSyncData");
