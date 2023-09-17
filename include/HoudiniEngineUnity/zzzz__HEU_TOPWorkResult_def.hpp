#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
// Type: HoudiniEngineUnity::HEU_TOPWorkResult
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9714))
// CS Name: HoudiniEngineUnity.HEU_TOPWorkResult
class CORDL_TYPE HEU_TOPWorkResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HEU_TOPWorkResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: " const&", def_value: None }]
constexpr HEU_TOPWorkResult(HEU_TOPWorkResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: "&&", def_value: None }]
constexpr HEU_TOPWorkResult(HEU_TOPWorkResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TOPWorkResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TOPWorkResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TOPWorkResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TOPWorkResult& operator=(HEU_TOPWorkResult&& o) noexcept = default;
  constexpr HEU_TOPWorkResult& operator=(HEU_TOPWorkResult const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__workItemIndex, put=__set__workItemIndex))  _workItemIndex;

constexpr void __set__workItemIndex(int32_t value) ;

constexpr int32_t __get__workItemIndex() const;

 int32_t __declspec(property(get=__get__workItemID, put=__set__workItemID))  _workItemID;

constexpr void __set__workItemID(int32_t value) ;

constexpr int32_t __get__workItemID() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get__generatedGOs, put=__set__generatedGOs))  _generatedGOs;

constexpr void __set__generatedGOs(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get__generatedGOs() const;


// Methods

// Ctor Parameters []
explicit HEU_TOPWorkResult() ;

/// @brief Method .ctor addr 0x202a7e4 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPWorkResult);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPWorkResult, "HoudiniEngineUnity", "HEU_TOPWorkResult");
