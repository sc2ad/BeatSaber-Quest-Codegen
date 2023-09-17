#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterface;
}
// Type: HoudiniEngineUnity::HEU_InputInterface
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9780))
// CS Name: HoudiniEngineUnity.HEU_InputInterface
class CORDL_TYPE HEU_InputInterface : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterface", modifiers: " const&", def_value: None }]
constexpr HEU_InputInterface(HEU_InputInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterface", modifiers: "&&", def_value: None }]
constexpr HEU_InputInterface(HEU_InputInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputInterface(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputInterface& operator=(HEU_InputInterface&& o) noexcept = default;
  constexpr HEU_InputInterface& operator=(HEU_InputInterface const& o) noexcept = default;
                


// Fields

/// @brief Field DEFAULT_PRIORITY offset 0
static constexpr int32_t  DEFAULT_PRIORITY{100};

 int32_t __declspec(property(get=__get__priority, put=__set__priority))  _priority;

constexpr void __set__priority(int32_t value) ;

constexpr int32_t __get__priority() const;


// Properties

 int32_t __declspec(property(get=get_Priority))  Priority;


// Methods

/// @brief Method get_Priority addr 0x20549f8 size 0x8 virtual false final false
 int32_t get_Priority() ;

// Ctor Parameters [CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None }]
explicit HEU_InputInterface(int32_t priority) ;

/// @brief Method .ctor addr 0x2054a00 size 0x28 virtual false final false
 void _ctor(int32_t priority) ;

/// @brief Method RegisterInterface addr 0x2054a28 size 0x58 virtual false final false
 void RegisterInterface() ;

/// @brief Method IsThisInputObjectSupported addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsThisInputObjectSupported(::UnityEngine::GameObject inputObject) ;

/// @brief Method CreateInputNodeWithDataUpload addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, ::UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterface);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterface, "HoudiniEngineUnity", "HEU_InputInterface");
