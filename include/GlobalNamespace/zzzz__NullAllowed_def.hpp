#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__NullAllowed__Context;
}
namespace GlobalNamespace {
class NullAllowed;
}
// Type: ::Context
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16088))
// CS Name: NullAllowed::Context
struct CORDL_TYPE GlobalNamespace__NullAllowed__Context : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__NullAllowed__Context(int32_t value__) noexcept;


                    constexpr GlobalNamespace__NullAllowed__Context(GlobalNamespace__NullAllowed__Context const&) = default;
                    constexpr GlobalNamespace__NullAllowed__Context(GlobalNamespace__NullAllowed__Context&&) = default;
                    constexpr GlobalNamespace__NullAllowed__Context& operator=(GlobalNamespace__NullAllowed__Context const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__NullAllowed__Context& operator=(GlobalNamespace__NullAllowed__Context&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NullAllowed__Context(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__NullAllowed__Context_Unwrapped : int32_t {
__Everywhere = 0,
__Prefab = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__NullAllowed__Context_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__NullAllowed__Context_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Everywhere offset 0
static GlobalNamespace::GlobalNamespace__NullAllowed__Context const Everywhere;

/// @brief Field Prefab offset 0
static GlobalNamespace::GlobalNamespace__NullAllowed__Context const Prefab;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NullAllowed
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16089))
// CS Name: NullAllowed
class CORDL_TYPE NullAllowed : public UnityEngine::PropertyAttribute {
public:
// Declarations
using Context = GlobalNamespace::GlobalNamespace__NullAllowed__Context;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NullAllowed() = default;

// Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: " const&", def_value: None }]
constexpr NullAllowed(NullAllowed const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NullAllowed", modifiers: "&&", def_value: None }]
constexpr NullAllowed(NullAllowed&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NullAllowed(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr NullAllowed& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NullAllowed& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NullAllowed& operator=(NullAllowed&& o) noexcept = default;
  constexpr NullAllowed& operator=(NullAllowed const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__NullAllowed__Context __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(GlobalNamespace::GlobalNamespace__NullAllowed__Context value) ;

constexpr GlobalNamespace::GlobalNamespace__NullAllowed__Context __get_context() const;

 ::StringW __declspec(property(get=__get_propertyName, put=__set_propertyName))  propertyName;

constexpr void __set_propertyName(::StringW value) ;

constexpr ::StringW __get_propertyName() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_ifNotValue, put=__set_ifNotValue))  ifNotValue;

constexpr void __set_ifNotValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_ifNotValue() const;


// Methods

// Ctor Parameters []
explicit NullAllowed() ;

/// @brief Method .ctor addr 0x1f8f350 size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "context", ty: "GlobalNamespace::GlobalNamespace__NullAllowed__Context", modifiers: "", def_value: None }]
explicit NullAllowed(GlobalNamespace::GlobalNamespace__NullAllowed__Context context) ;

/// @brief Method .ctor addr 0x1f8f36c size 0x28 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__NullAllowed__Context context) ;

// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifNotValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit NullAllowed(::StringW propertyName, ::bs_hook::Il2CppWrapperType ifNotValue) ;

/// @brief Method .ctor addr 0x1f8f394 size 0x30 virtual false final false
 void _ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType ifNotValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NullAllowed__Context, "", "NullAllowed/Context");
NEED_NO_BOX(GlobalNamespace::NullAllowed);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NullAllowed, "", "NullAllowed");
