#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IComparer;
}
namespace System::Globalization {
class CompareInfo;
}
// Forward declare root types
namespace System {
class InvariantComparer;
}
// Type: System::InvariantComparer
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7719))
// CS Name: System.InvariantComparer
class CORDL_TYPE InvariantComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IComparer
constexpr operator  ::System::Collections::IComparer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~InvariantComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: " const&", def_value: None }]
constexpr InvariantComparer(InvariantComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: "&&", def_value: None }]
constexpr InvariantComparer(InvariantComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvariantComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InvariantComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvariantComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvariantComparer& operator=(InvariantComparer&& o) noexcept = default;
  constexpr InvariantComparer& operator=(InvariantComparer const& o) noexcept = default;
                


// Fields

 ::System::Globalization::CompareInfo __declspec(property(get=__get_m_compareInfo, put=__set_m_compareInfo))  m_compareInfo;

constexpr void __set_m_compareInfo(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get_m_compareInfo() const;

static ::System::InvariantComparer __declspec(property(get=__get_Default, put=__set_Default))  Default;

static void __set_Default(::System::InvariantComparer value) ;

static ::System::InvariantComparer __get_Default() ;


// Methods

// Ctor Parameters []
explicit InvariantComparer() ;

/// @brief Method .ctor addr 0x27b6748 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method Compare addr 0x27b67c4 size 0xec virtual true final true
 int32_t Compare(::bs_hook::Il2CppWrapperType a, ::bs_hook::Il2CppWrapperType b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::InvariantComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::InvariantComparer, "System", "InvariantComparer");
