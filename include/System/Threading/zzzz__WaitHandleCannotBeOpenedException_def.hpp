#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ApplicationException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Threading {
class WaitHandleCannotBeOpenedException;
}
// Type: System.Threading::WaitHandleCannotBeOpenedException
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2343))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2674))
// CS Name: System.Threading.WaitHandleCannotBeOpenedException
class CORDL_TYPE WaitHandleCannotBeOpenedException : public System::ApplicationException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~WaitHandleCannotBeOpenedException() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandleCannotBeOpenedException", modifiers: " const&", def_value: None }]
constexpr WaitHandleCannotBeOpenedException(WaitHandleCannotBeOpenedException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitHandleCannotBeOpenedException", modifiers: "&&", def_value: None }]
constexpr WaitHandleCannotBeOpenedException(WaitHandleCannotBeOpenedException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitHandleCannotBeOpenedException(void* ptr) noexcept : System::ApplicationException(ptr) {
}


  constexpr WaitHandleCannotBeOpenedException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitHandleCannotBeOpenedException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitHandleCannotBeOpenedException& operator=(WaitHandleCannotBeOpenedException&& o) noexcept = default;
  constexpr WaitHandleCannotBeOpenedException& operator=(WaitHandleCannotBeOpenedException const& o) noexcept = default;
                


// Methods

static System::Threading::WaitHandleCannotBeOpenedException New_ctor() ;

/// @brief Method .ctor addr 0x24a2ea4 size 0x5c virtual false final false
 void _ctor() ;

static System::Threading::WaitHandleCannotBeOpenedException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x24a2f00 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::Threading::WaitHandleCannotBeOpenedException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24a2f24 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::WaitHandleCannotBeOpenedException);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitHandleCannotBeOpenedException, "System.Threading", "WaitHandleCannotBeOpenedException");
