#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class ServicePoint;
}
// Forward declare root types
namespace System::Net {
class BindIPEndPoint;
}
// Type: System.Net::BindIPEndPoint
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8001))
// CS Name: System.Net.BindIPEndPoint
class CORDL_TYPE BindIPEndPoint : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BindIPEndPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: " const&", def_value: None }]
constexpr BindIPEndPoint(BindIPEndPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindIPEndPoint", modifiers: "&&", def_value: None }]
constexpr BindIPEndPoint(BindIPEndPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindIPEndPoint(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr BindIPEndPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindIPEndPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindIPEndPoint& operator=(BindIPEndPoint&& o) noexcept = default;
  constexpr BindIPEndPoint& operator=(BindIPEndPoint const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit BindIPEndPoint(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x28297f0 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2829920 size 0x14 virtual true final false
 ::System::Net::IPEndPoint Invoke(::System::Net::ServicePoint servicePoint, ::System::Net::IPEndPoint remoteEndPoint, int32_t retryCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::BindIPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BindIPEndPoint, "System.Net", "BindIPEndPoint");
