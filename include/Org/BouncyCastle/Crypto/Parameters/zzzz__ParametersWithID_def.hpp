#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithID;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithID
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1071))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ParametersWithID
class CORDL_TYPE ParametersWithID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipherParameters
constexpr operator  Org::BouncyCastle::Crypto::ICipherParameters() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ParametersWithID() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithID", modifiers: " const&", def_value: None }]
constexpr ParametersWithID(ParametersWithID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParametersWithID", modifiers: "&&", def_value: None }]
constexpr ParametersWithID(ParametersWithID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParametersWithID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParametersWithID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParametersWithID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParametersWithID& operator=(ParametersWithID&& o) noexcept = default;
  constexpr ParametersWithID& operator=(ParametersWithID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_parameters() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_id() const;


// Properties

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ParametersWithID(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> id) ;

/// @brief Method .ctor addr 0xeaad80 size 0x1c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> id) ;

// Ctor Parameters [CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::ICipherParameters", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "idOff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "idLen", ty: "int32_t", modifiers: "", def_value: None }]
explicit ParametersWithID(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> id, int32_t idOff, int32_t idLen) ;

/// @brief Method .ctor addr 0xeaad9c size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ICipherParameters parameters, ::ArrayW<uint8_t> id, int32_t idOff, int32_t idLen) ;

/// @brief Method GetID addr 0xeaae34 size 0x8 virtual false final false
 ::ArrayW<uint8_t> GetID() ;

/// @brief Method get_Parameters addr 0xeaae3c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::ICipherParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ParametersWithID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithID, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
