#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System {
class MulticastDelegate;
}
// Type: System::MulticastDelegate
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2610))
// CS Name: System.MulticastDelegate
class CORDL_TYPE MulticastDelegate : public ::System::Delegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MulticastDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: " const&", def_value: None }]
constexpr MulticastDelegate(MulticastDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MulticastDelegate", modifiers: "&&", def_value: None }]
constexpr MulticastDelegate(MulticastDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MulticastDelegate(void* ptr) noexcept : ::System::Delegate(ptr) {
}


  constexpr MulticastDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MulticastDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MulticastDelegate& operator=(MulticastDelegate&& o) noexcept = default;
  constexpr MulticastDelegate& operator=(MulticastDelegate const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Delegate> __declspec(property(get=__get_delegates, put=__set_delegates))  delegates;

constexpr void __set_delegates(::ArrayW<::System::Delegate> value) ;

constexpr ::ArrayW<::System::Delegate> __get_delegates() const;


// Methods

/// @brief Method GetObjectData addr 0x248fea8 size 0x4 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method DynamicInvokeImpl addr 0x248feac size 0x90 virtual true final true
 ::bs_hook::Il2CppWrapperType DynamicInvokeImpl(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method Equals addr 0x248ff3c size 0x144 virtual true final true
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2490080 size 0x4 virtual true final true
 int32_t GetHashCode() ;

/// @brief Method GetMethodImpl addr 0x2490084 size 0x48 virtual true final false
 ::System::Reflection::MethodInfo GetMethodImpl() ;

/// @brief Method GetInvocationList addr 0x24900cc size 0xcc virtual true final true
 ::ArrayW<::System::Delegate> GetInvocationList() ;

/// @brief Method CombineImpl addr 0x2490198 size 0x268 virtual true final true
 ::System::Delegate CombineImpl(::System::Delegate follow) ;

/// @brief Method LastIndexOf addr 0x2490400 size 0x12c virtual false final false
 int32_t LastIndexOf(::ArrayW<::System::Delegate> haystack, ::ArrayW<::System::Delegate> needle) ;

/// @brief Method RemoveImpl addr 0x249052c size 0x2e0 virtual true final true
 ::System::Delegate RemoveImpl(::System::Delegate value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::MulticastDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::MulticastDelegate, "System", "MulticastDelegate");
