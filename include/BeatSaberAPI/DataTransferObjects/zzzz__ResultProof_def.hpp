#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class ResultProof;
}
// Type: BeatSaberAPI.DataTransferObjects::ResultProof
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6181))
// CS Name: BeatSaberAPI.DataTransferObjects.ResultProof
class CORDL_TYPE ResultProof : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ResultProof() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultProof", modifiers: " const&", def_value: None }]
constexpr ResultProof(ResultProof const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultProof", modifiers: "&&", def_value: None }]
constexpr ResultProof(ResultProof&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultProof(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResultProof& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultProof& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultProof& operator=(ResultProof&& o) noexcept = default;
  constexpr ResultProof& operator=(ResultProof const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__proof_k__BackingField, put=__set__proof_k__BackingField))  _proof_k__BackingField;

constexpr void __set__proof_k__BackingField(::StringW value) ;

constexpr ::StringW __get__proof_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_proof, put=set_proof))  proof;


// Methods

/// @brief Method get_proof addr 0x21d735c size 0x8 virtual false final false
 ::StringW get_proof() ;

/// @brief Method set_proof addr 0x21d7364 size 0x8 virtual false final false
 void set_proof(::StringW value) ;

// Ctor Parameters []
explicit ResultProof() ;

/// @brief Method .ctor addr 0x21d736c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
} // end anonymous namespace
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::ResultProof);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ResultProof, "BeatSaberAPI.DataTransferObjects", "ResultProof");
