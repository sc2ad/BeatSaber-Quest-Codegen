#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CompareInfo;
}
namespace System::Collections {
class IHashCodeProvider;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Collections {
class CaseInsensitiveHashCodeProvider;
}
// Type: System.Collections::CaseInsensitiveHashCodeProvider
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3757))
// CS Name: System.Collections.CaseInsensitiveHashCodeProvider
class CORDL_TYPE CaseInsensitiveHashCodeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IHashCodeProvider
constexpr operator  ::System::Collections::IHashCodeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CaseInsensitiveHashCodeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveHashCodeProvider", modifiers: " const&", def_value: None }]
constexpr CaseInsensitiveHashCodeProvider(CaseInsensitiveHashCodeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveHashCodeProvider", modifiers: "&&", def_value: None }]
constexpr CaseInsensitiveHashCodeProvider(CaseInsensitiveHashCodeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CaseInsensitiveHashCodeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CaseInsensitiveHashCodeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CaseInsensitiveHashCodeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CaseInsensitiveHashCodeProvider& operator=(CaseInsensitiveHashCodeProvider&& o) noexcept = default;
  constexpr CaseInsensitiveHashCodeProvider& operator=(CaseInsensitiveHashCodeProvider const& o) noexcept = default;
                


// Fields

 ::System::Globalization::CompareInfo __declspec(property(get=__get__compareInfo, put=__set__compareInfo))  _compareInfo;

constexpr void __set__compareInfo(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get__compareInfo() const;


// Methods

// Ctor Parameters []
explicit CaseInsensitiveHashCodeProvider() ;

/// @brief Method .ctor addr 0x2410284 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit CaseInsensitiveHashCodeProvider(::System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x2410300 size 0x88 virtual false final false
 void _ctor(::System::Globalization::CultureInfo culture) ;

/// @brief Method GetHashCode addr 0x2410388 size 0xd8 virtual true final true
 int32_t GetHashCode(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::CaseInsensitiveHashCodeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveHashCodeProvider, "System.Collections", "CaseInsensitiveHashCodeProvider");
