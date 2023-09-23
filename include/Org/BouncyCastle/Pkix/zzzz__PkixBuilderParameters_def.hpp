#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
// Type: Org.BouncyCastle.Pkix::PkixBuilderParameters
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1713))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1714))
// CS Name: Org.BouncyCastle.Pkix.PkixBuilderParameters
class CORDL_TYPE PkixBuilderParameters : public Org::BouncyCastle::Pkix::PkixParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~PkixBuilderParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: " const&", def_value: None }]
constexpr PkixBuilderParameters(PkixBuilderParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: "&&", def_value: None }]
constexpr PkixBuilderParameters(PkixBuilderParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PkixBuilderParameters(void* ptr) noexcept : Org::BouncyCastle::Pkix::PkixParameters(ptr) {
}


  constexpr PkixBuilderParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PkixBuilderParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PkixBuilderParameters& operator=(PkixBuilderParameters&& o) noexcept = default;
  constexpr PkixBuilderParameters& operator=(PkixBuilderParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_maxPathLength, put=__set_maxPathLength))  maxPathLength;

constexpr void __set_maxPathLength(int32_t value) ;

constexpr int32_t __get_maxPathLength() const;

 Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_excludedCerts, put=__set_excludedCerts))  excludedCerts;

constexpr void __set_excludedCerts(Org::BouncyCastle::Utilities::Collections::ISet value) ;

constexpr Org::BouncyCastle::Utilities::Collections::ISet __get_excludedCerts() const;


// Properties

 int32_t __declspec(property(get=get_MaxPathLength, put=set_MaxPathLength))  MaxPathLength;


// Methods

/// @brief Method GetInstance addr 0x106372c size 0xec virtual false final false
static Org::BouncyCastle::Pkix::PkixBuilderParameters GetInstance(Org::BouncyCastle::Pkix::PkixParameters pkixParams) ;

// Ctor Parameters [CppParam { name: "trustAnchors", ty: "Org::BouncyCastle::Utilities::Collections::ISet", modifiers: "", def_value: None }, CppParam { name: "targetConstraints", ty: "Org::BouncyCastle::X509::Store::IX509Selector", modifiers: "", def_value: None }]
explicit PkixBuilderParameters(Org::BouncyCastle::Utilities::Collections::ISet trustAnchors, Org::BouncyCastle::X509::Store::IX509Selector targetConstraints) ;

/// @brief Method .ctor addr 0x1063818 size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Utilities::Collections::ISet trustAnchors, Org::BouncyCastle::X509::Store::IX509Selector targetConstraints) ;

/// @brief Method get_MaxPathLength addr 0x10638b0 size 0x8 virtual true final false
 int32_t get_MaxPathLength() ;

/// @brief Method set_MaxPathLength addr 0x10638b8 size 0x64 virtual true final false
 void set_MaxPathLength(int32_t value) ;

/// @brief Method GetExcludedCerts addr 0x106391c size 0x68 virtual true final false
 Org::BouncyCastle::Utilities::Collections::ISet GetExcludedCerts() ;

/// @brief Method SetExcludedCerts addr 0x1063984 size 0x80 virtual true final false
 void SetExcludedCerts(Org::BouncyCastle::Utilities::Collections::ISet excludedCerts) ;

/// @brief Method SetParams addr 0x1063a04 size 0xc4 virtual true final false
 void SetParams(Org::BouncyCastle::Pkix::PkixParameters parameters) ;

/// @brief Method Clone addr 0x1063ac8 size 0xb8 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method ToString addr 0x1063b80 size 0x174 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(Org::BouncyCastle::Pkix::PkixBuilderParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkix::PkixBuilderParameters, "Org.BouncyCastle.Pkix", "PkixBuilderParameters");
