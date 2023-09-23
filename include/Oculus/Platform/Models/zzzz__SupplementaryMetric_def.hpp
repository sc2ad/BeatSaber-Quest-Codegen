#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class SupplementaryMetric;
}
// Type: Oculus.Platform.Models::SupplementaryMetric
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13476))
// CS Name: Oculus.Platform.Models.SupplementaryMetric
class CORDL_TYPE SupplementaryMetric : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SupplementaryMetric() = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementaryMetric", modifiers: " const&", def_value: None }]
constexpr SupplementaryMetric(SupplementaryMetric const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SupplementaryMetric", modifiers: "&&", def_value: None }]
constexpr SupplementaryMetric(SupplementaryMetric&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SupplementaryMetric(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SupplementaryMetric& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SupplementaryMetric& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SupplementaryMetric& operator=(SupplementaryMetric&& o) noexcept = default;
  constexpr SupplementaryMetric& operator=(SupplementaryMetric const& o) noexcept = default;
                


// Fields

 uint64_t __declspec(property(get=__get_ID, put=__set_ID))  ID;

constexpr void __set_ID(uint64_t value) ;

constexpr uint64_t __get_ID() const;

 int64_t __declspec(property(get=__get_Metric, put=__set_Metric))  Metric;

constexpr void __set_Metric(int64_t value) ;

constexpr int64_t __get_Metric() const;


// Methods

// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SupplementaryMetric(::cordl_internals::intptr_t o) ;

/// @brief Method .ctor addr 0x259f9a8 size 0x88 virtual false final false
 void _ctor(::cordl_internals::intptr_t o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::SupplementaryMetric);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SupplementaryMetric, "Oculus.Platform.Models", "SupplementaryMetric");
