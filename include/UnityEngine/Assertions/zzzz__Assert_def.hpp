#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
// Forward declare root types
namespace UnityEngine::Assertions {
class Assert;
}
// Type: UnityEngine.Assertions::Assert
namespace UnityEngine::Assertions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10250))
// CS Name: UnityEngine.Assertions.Assert
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
                


// Fields

static bool __declspec(property(get=__get_raiseExceptions, put=__set_raiseExceptions))  raiseExceptions;

static void __set_raiseExceptions(bool value) ;

static bool __get_raiseExceptions() ;


// Methods

/// @brief Method IsTrue addr 0x2b70ca0 size 0x6c virtual false final false
static void IsTrue(bool condition) ;

/// @brief Method IsTrue addr 0x2b70d0c size 0x80 virtual false final false
static void IsTrue(bool condition, ::StringW message) ;

/// @brief Method IsFalse addr 0x2b70f44 size 0x80 virtual false final false
static void IsFalse(bool condition, ::StringW message) ;

/// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNull(T value) ;

/// @brief Method IsNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNull(T value, ::StringW message) ;

/// @brief Method IsNull addr 0x2b70fc4 size 0xbc virtual false final false
static void IsNull(UnityEngine::Object value, ::StringW message) ;

/// @brief Method IsNotNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNotNull(T value) ;

/// @brief Method IsNotNull addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void IsNotNull(T value, ::StringW message) ;

/// @brief Method IsNotNull addr 0x2b711e8 size 0xbc virtual false final false
static void IsNotNull(UnityEngine::Object value, ::StringW message) ;

/// @brief Method Fail addr 0x2b70e1c size 0x128 virtual false final false
static void Fail(::StringW message, ::StringW userMessage) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreEqual(T expected, T actual) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreEqual(T expected, T actual, ::StringW message) ;

/// @brief Method AreEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreEqual(T expected, T actual, ::StringW message, System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method AreEqual addr 0x2b71318 size 0xc8 virtual false final false
static void AreEqual(UnityEngine::Object expected, UnityEngine::Object actual, ::StringW message) ;

/// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreNotEqual(T expected, T actual) ;

/// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreNotEqual(T expected, T actual, ::StringW message) ;

/// @brief Method AreNotEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AreNotEqual(T expected, T actual, ::StringW message, System::Collections::Generic::IEqualityComparer_1<T> comparer) ;

/// @brief Method AreNotEqual addr 0x2b715d4 size 0xc8 virtual false final false
static void AreNotEqual(UnityEngine::Object expected, UnityEngine::Object actual, ::StringW message) ;

/// @brief Method AreEqual addr 0x2b7169c size 0x8c virtual false final false
static void AreEqual(int32_t expected, int32_t actual) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Assertions
NEED_NO_BOX(UnityEngine::Assertions::Assert);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::Assert, "UnityEngine.Assertions", "Assert");
