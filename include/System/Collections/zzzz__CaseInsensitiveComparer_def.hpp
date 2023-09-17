#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureInfo;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Collections {
class CaseInsensitiveComparer;
}
// Type: System.Collections::CaseInsensitiveComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3756))
// CS Name: System.Collections.CaseInsensitiveComparer
class CORDL_TYPE CaseInsensitiveComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CaseInsensitiveComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: " const&", def_value: None }]
constexpr CaseInsensitiveComparer(CaseInsensitiveComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveComparer", modifiers: "&&", def_value: None }]
constexpr CaseInsensitiveComparer(CaseInsensitiveComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CaseInsensitiveComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CaseInsensitiveComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CaseInsensitiveComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CaseInsensitiveComparer& operator=(CaseInsensitiveComparer&& o) noexcept = default;
  constexpr CaseInsensitiveComparer& operator=(CaseInsensitiveComparer const& o) noexcept = default;
                


// Fields

 ::System::Globalization::CompareInfo __declspec(property(get=__get__compareInfo, put=__set__compareInfo))  _compareInfo;

constexpr void __set__compareInfo(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get__compareInfo() const;


// Methods

// Ctor Parameters []
explicit CaseInsensitiveComparer() ;

/// @brief Method .ctor addr 0x2410094 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "culture", ty: "::System::Globalization::CultureInfo", modifiers: "", def_value: None }]
explicit CaseInsensitiveComparer(::System::Globalization::CultureInfo culture) ;

/// @brief Method .ctor addr 0x2410110 size 0x88 virtual false final false
 void _ctor(::System::Globalization::CultureInfo culture) ;

/// @brief Method Compare addr 0x2410198 size 0xec virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
} // end anonymous namespace
NEED_NO_BOX(::System::Collections::CaseInsensitiveComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CaseInsensitiveComparer, "System.Collections", "CaseInsensitiveComparer");
