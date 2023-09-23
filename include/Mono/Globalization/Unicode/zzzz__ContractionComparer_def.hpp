#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Mono::Globalization::Unicode {
class Contraction;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class ContractionComparer;
}
// Type: Mono.Globalization.Unicode::ContractionComparer
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2261))
// CS Name: Mono.Globalization.Unicode.ContractionComparer
class CORDL_TYPE ContractionComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction>
constexpr operator  System::Collections::Generic::IComparer_1<Mono::Globalization::Unicode::Contraction>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ContractionComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractionComparer", modifiers: " const&", def_value: None }]
constexpr ContractionComparer(ContractionComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContractionComparer", modifiers: "&&", def_value: None }]
constexpr ContractionComparer(ContractionComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContractionComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ContractionComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContractionComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContractionComparer& operator=(ContractionComparer&& o) noexcept = default;
  constexpr ContractionComparer& operator=(ContractionComparer const& o) noexcept = default;
                


// Fields

static Mono::Globalization::Unicode::ContractionComparer __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Mono::Globalization::Unicode::ContractionComparer value) ;

static Mono::Globalization::Unicode::ContractionComparer __get_Instance() ;


// Methods

/// @brief Method Compare addr 0x22a7f9c size 0x94 virtual true final true
 int32_t Compare(Mono::Globalization::Unicode::Contraction c1, Mono::Globalization::Unicode::Contraction c2) ;

// Ctor Parameters []
explicit ContractionComparer() ;

/// @brief Method .ctor addr 0x22a8030 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::ContractionComparer);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::ContractionComparer, "Mono.Globalization.Unicode", "ContractionComparer");
