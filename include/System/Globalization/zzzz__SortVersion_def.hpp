#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
struct Guid;
}
// Forward declare root types
namespace System::Globalization {
class SortVersion;
}
// Type: System.Globalization::SortVersion
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3665))
// CS Name: System.Globalization.SortVersion
class CORDL_TYPE SortVersion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SortVersion() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: " const&", def_value: None }]
constexpr SortVersion(SortVersion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortVersion", modifiers: "&&", def_value: None }]
constexpr SortVersion(SortVersion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortVersion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortVersion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortVersion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortVersion& operator=(SortVersion&& o) noexcept = default;
  constexpr SortVersion& operator=(SortVersion const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_NlsVersion, put=__set_m_NlsVersion))  m_NlsVersion;

constexpr void __set_m_NlsVersion(int32_t value) ;

constexpr int32_t __get_m_NlsVersion() const;

 System::Guid __declspec(property(get=__get_m_SortId, put=__set_m_SortId))  m_SortId;

constexpr void __set_m_SortId(System::Guid value) ;

constexpr System::Guid __get_m_SortId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::SortVersion);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::SortVersion, "System.Globalization", "SortVersion");
