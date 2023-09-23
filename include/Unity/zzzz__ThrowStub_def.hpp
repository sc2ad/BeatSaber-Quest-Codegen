#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ObjectDisposedException_def.hpp"
// Forward declare root types
namespace Unity {
class ThrowStub;
}
// Type: Unity::ThrowStub
namespace Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2452))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3936))
// CS Name: Unity.ThrowStub
class CORDL_TYPE ThrowStub : public System::ObjectDisposedException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~ThrowStub() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: " const&", def_value: None }]
constexpr ThrowStub(ThrowStub const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThrowStub", modifiers: "&&", def_value: None }]
constexpr ThrowStub(ThrowStub&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThrowStub(void* ptr) noexcept : System::ObjectDisposedException(ptr) {
}


  constexpr ThrowStub& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThrowStub& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThrowStub& operator=(ThrowStub&& o) noexcept = default;
  constexpr ThrowStub& operator=(ThrowStub const& o) noexcept = default;
                


// Methods

/// @brief Method ThrowNotSupportedException addr 0x241ea84 size 0x1040 virtual false final false
static void ThrowNotSupportedException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity
NEED_NO_BOX(Unity::ThrowStub);
DEFINE_IL2CPP_ARG_TYPE(Unity::ThrowStub, "Unity", "ThrowStub");
