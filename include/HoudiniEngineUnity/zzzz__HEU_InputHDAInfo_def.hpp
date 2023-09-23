#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
// Type: HoudiniEngineUnity::HEU_InputHDAInfo
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9588))
// CS Name: HoudiniEngineUnity.HEU_InputHDAInfo
class CORDL_TYPE HEU_InputHDAInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputHDAInfo>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_InputHDAInfo>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_InputHDAInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputHDAInfo", modifiers: " const&", def_value: None }]
constexpr HEU_InputHDAInfo(HEU_InputHDAInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputHDAInfo", modifiers: "&&", def_value: None }]
constexpr HEU_InputHDAInfo(HEU_InputHDAInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputHDAInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputHDAInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputHDAInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputHDAInfo& operator=(HEU_InputHDAInfo&& o) noexcept = default;
  constexpr HEU_InputHDAInfo& operator=(HEU_InputHDAInfo const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__pendingGO, put=__set__pendingGO))  _pendingGO;

constexpr void __set__pendingGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__pendingGO() const;

 UnityEngine::GameObject __declspec(property(get=__get__connectedGO, put=__set__connectedGO))  _connectedGO;

constexpr void __set__connectedGO(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__connectedGO() const;

 int32_t __declspec(property(get=__get__connectedInputNodeID, put=__set__connectedInputNodeID))  _connectedInputNodeID;

constexpr void __set__connectedInputNodeID(int32_t value) ;

constexpr int32_t __get__connectedInputNodeID() const;


// Methods

/// @brief Method CopyTo addr 0x1ffd310 size 0x24 virtual false final false
 void CopyTo(HoudiniEngineUnity::HEU_InputHDAInfo destInfo) ;

/// @brief Method IsEquivalentTo addr 0x1ffe9e8 size 0x130 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_InputHDAInfo other) ;

// Ctor Parameters []
explicit HEU_InputHDAInfo() ;

/// @brief Method .ctor addr 0x1ffc810 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputHDAInfo);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputHDAInfo, "HoudiniEngineUnity", "HEU_InputHDAInfo");
