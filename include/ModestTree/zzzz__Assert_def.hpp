#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Exception;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Zenject {
class ZenjectException;
}
// Forward declare root types
namespace ModestTree {
class Assert;
}
// Type: ModestTree::Assert
namespace ModestTree {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10551))
// CS Name: ModestTree.Assert
class CORDL_TYPE Assert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Assert() = default;

// Ctor Parameters [CppParam { name: "", ty: "Assert", modifiers: " const&", def_value: None }]
constexpr Assert(Assert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Assert", modifiers: "&&", def_value: None }]
constexpr Assert(Assert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Assert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Assert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Assert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Assert& operator=(Assert&& o) noexcept = default;
  constexpr Assert& operator=(Assert const& o) noexcept = default;
                


// Methods

/// @brief Method That addr 0x2d414dc size 0x38 virtual false final false
static void That(bool condition) ;

/// @brief Method IsNotEmpty addr 0x2d41578 size 0x44 virtual false final false
static void IsNotEmpty(::StringW str) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsEmpty(System::Collections::Generic::IList_1<T> list) ;

/// @brief Method IsEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsEmpty(System::Collections::Generic::IEnumerable_1<T> sequence) ;

/// @brief Method IsType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsType(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsType(::bs_hook::Il2CppWrapperType obj, ::StringW message) ;

/// @brief Method DerivesFrom addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DerivesFrom(System::Type type) ;

/// @brief Method DerivesFromOrEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DerivesFromOrEqual(System::Type type) ;

/// @brief Method DerivesFrom addr 0x2d415bc size 0x138 virtual false final false
static void DerivesFrom(System::Type childType, System::Type parentType) ;

/// @brief Method DerivesFromOrEqual addr 0x2d41828 size 0x138 virtual false final false
static void DerivesFromOrEqual(System::Type childType, System::Type parentType) ;

/// @brief Method IsEqual addr 0x2d41a00 size 0x58 virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right) ;

/// @brief Method IsEqual addr 0x2d41b64 size 0x12c virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method IsApproximately addr 0x2d41c90 size 0x13c virtual false final false
static void IsApproximately(float_t left, float_t right, float_t epsilon) ;

/// @brief Method IsEqual addr 0x2d41a58 size 0x10c virtual false final false
static void IsEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, ::StringW message) ;

/// @brief Method IsNotEqual addr 0x2d41dcc size 0x58 virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right) ;

/// @brief Method IsNotEqual addr 0x2d41f00 size 0x12c virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method IsNull addr 0x2d4202c size 0x80 virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val) ;

/// @brief Method IsNull addr 0x2d420ac size 0x7c virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val, ::StringW message) ;

/// @brief Method IsNull addr 0x2d42128 size 0xd0 virtual false final false
static void IsNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method IsNotNull addr 0x2d423ac size 0x38 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val) ;

/// @brief Method IsNotNull addr 0x2d423e4 size 0x7c virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message) ;

/// @brief Method IsNotNull addr 0x2d42460 size 0xd0 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method IsNotNull addr 0x2d42530 size 0xf8 virtual false final false
static void IsNotNull(::bs_hook::Il2CppWrapperType val, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2) ;

/// @brief Method IsNotEmpty addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNotEmpty(System::Collections::Generic::IEnumerable_1<T> val, ::StringW message) ;

/// @brief Method IsNotEqual addr 0x2d41e24 size 0xdc virtual false final false
static void IsNotEqual(::bs_hook::Il2CppWrapperType left, ::bs_hook::Il2CppWrapperType right, ::StringW message) ;

/// @brief Method Warn addr 0x2d42628 size 0xac virtual false final false
static void Warn(bool condition) ;

/// @brief Method Warn addr 0x2d4274c size 0xe8 virtual false final false
static void Warn(bool condition, System::Func_1<::StringW> messageGenerator) ;

/// @brief Method That addr 0x2d42834 size 0x48 virtual false final false
static void That(bool condition, ::StringW message) ;

/// @brief Method That addr 0x2d4287c size 0x98 virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1) ;

/// @brief Method That addr 0x2d42914 size 0xc4 virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2) ;

/// @brief Method That addr 0x2d429d8 size 0xec virtual false final false
static void That(bool condition, ::StringW message, ::bs_hook::Il2CppWrapperType p1, ::bs_hook::Il2CppWrapperType p2, ::bs_hook::Il2CppWrapperType p3) ;

/// @brief Method Warn addr 0x2d42ac4 size 0xd0 virtual false final false
static void Warn(bool condition, ::StringW message) ;

/// @brief Method Throws addr 0x2d42b94 size 0x48 virtual false final false
static void Throws(System::Action action) ;

/// @brief Method Throws addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TException>
static void Throws(System::Action action) ;

/// @brief Method CreateException addr 0x2d42bdc size 0x74 virtual false final false
static Zenject::ZenjectException CreateException() ;

/// @brief Method CreateException addr 0x2d41514 size 0x64 virtual false final false
static Zenject::ZenjectException CreateException(::StringW message) ;

/// @brief Method CreateException addr 0x2d417a4 size 0x84 virtual false final false
static Zenject::ZenjectException CreateException(::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method CreateException addr 0x2d42c50 size 0x8c virtual false final false
static Zenject::ZenjectException CreateException(System::Exception innerException, ::StringW message, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree
NEED_NO_BOX(ModestTree::Assert);
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Assert, "ModestTree", "Assert");
