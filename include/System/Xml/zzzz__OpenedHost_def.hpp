#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Xml {
class OpenedHost;
}
// Type: System.Xml::OpenedHost
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11494))
// CS Name: System.Xml.OpenedHost
class CORDL_TYPE OpenedHost : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OpenedHost() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: " const&", def_value: None }]
constexpr OpenedHost(OpenedHost const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenedHost", modifiers: "&&", def_value: None }]
constexpr OpenedHost(OpenedHost&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenedHost(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OpenedHost& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenedHost& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenedHost& operator=(OpenedHost&& o) noexcept = default;
  constexpr OpenedHost& operator=(OpenedHost const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_nonCachedConnectionsCount, put=__set_nonCachedConnectionsCount))  nonCachedConnectionsCount;

constexpr void __set_nonCachedConnectionsCount(int32_t value) ;

constexpr int32_t __get_nonCachedConnectionsCount() const;


// Methods

static System::Xml::OpenedHost New_ctor() ;

/// @brief Method .ctor addr 0x27108dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::OpenedHost);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::OpenedHost, "System.Xml", "OpenedHost");
