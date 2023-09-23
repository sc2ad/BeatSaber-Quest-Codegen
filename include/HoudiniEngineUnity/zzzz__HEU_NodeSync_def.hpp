#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_NodeSync;
}
// Type: HoudiniEngineUnity::HEU_NodeSync
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9734))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9737))
// CS Name: HoudiniEngineUnity.HEU_NodeSync
class CORDL_TYPE HEU_NodeSync : public HoudiniEngineUnity::HEU_BaseSync {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HEU_NodeSync() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: " const&", def_value: None }]
constexpr HEU_NodeSync(HEU_NodeSync const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_NodeSync", modifiers: "&&", def_value: None }]
constexpr HEU_NodeSync(HEU_NodeSync&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_NodeSync(void* ptr) noexcept : HoudiniEngineUnity::HEU_BaseSync(ptr) {
}


  constexpr HEU_NodeSync& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_NodeSync& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_NodeSync& operator=(HEU_NodeSync&& o) noexcept = default;
  constexpr HEU_NodeSync& operator=(HEU_NodeSync const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__nodeSaveFilePath, put=__set__nodeSaveFilePath))  _nodeSaveFilePath;

constexpr void __set__nodeSaveFilePath(::StringW value) ;

constexpr ::StringW __get__nodeSaveFilePath() const;


// Methods

/// @brief Method OnEnable addr 0x20387dc size 0x4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x20387e0 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method InitializeFromHoudini addr 0x20387ec size 0xac virtual false final false
 void InitializeFromHoudini(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, ::StringW nodeName, ::StringW filePath) ;

/// @brief Method SetupLoadTask addr 0x2038898 size 0x98 virtual true final false
 void SetupLoadTask(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method SaveNodeToFile addr 0x2038944 size 0xa0 virtual false final false
 bool SaveNodeToFile(::StringW filePath) ;

/// @brief Method CreateNodeSync addr 0x20389e4 size 0x2f8 virtual false final false
static void CreateNodeSync(HoudiniEngineUnity::HEU_SessionBase session, ::StringW opName, ::StringW nodeNabel) ;

/// @brief Method Resync addr 0x2038cdc size 0x38 virtual true final false
 void Resync() ;

/// @brief Method SyncUpdate addr 0x2038d14 size 0x10c virtual true final false
 void SyncUpdate() ;

// Ctor Parameters []
explicit HEU_NodeSync() ;

/// @brief Method .ctor addr 0x2038e20 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_NodeSync);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_NodeSync, "HoudiniEngineUnity", "HEU_NodeSync");
