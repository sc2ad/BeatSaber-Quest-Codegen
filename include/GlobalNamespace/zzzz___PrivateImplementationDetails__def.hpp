#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
// Forward declare root types
namespace GlobalNamespace {
class _PrivateImplementationDetails_;
}
namespace GlobalNamespace {
struct GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24;
}
// Type: ::__StaticArrayInitTypeSize=24
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9524))
// CS Name: <PrivateImplementationDetails>::__StaticArrayInitTypeSize=24
struct CORDL_TYPE GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24(GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 const&) = default;
                    constexpr GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24(GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24&&) = default;
                    constexpr GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24& operator=(GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24& operator=(GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PrivateImplementationDetails>
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9525))
// CS Name: <PrivateImplementationDetails>
class CORDL_TYPE _PrivateImplementationDetails_ : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __StaticArrayInitTypeSize=24 = GlobalNamespace::GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~_PrivateImplementationDetails_() = default;

// Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: " const&", def_value: None }]
constexpr _PrivateImplementationDetails_(_PrivateImplementationDetails_ const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "_PrivateImplementationDetails_", modifiers: "&&", def_value: None }]
constexpr _PrivateImplementationDetails_(_PrivateImplementationDetails_&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _PrivateImplementationDetails_(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr _PrivateImplementationDetails_& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr _PrivateImplementationDetails_& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr _PrivateImplementationDetails_& operator=(_PrivateImplementationDetails_&& o) noexcept = default;
  constexpr _PrivateImplementationDetails_& operator=(_PrivateImplementationDetails_ const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 __declspec(property(get=__get_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D, put=__set_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D))  CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D;

static void __set_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D(GlobalNamespace::GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 value) ;

static GlobalNamespace::GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24 __get_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::_PrivateImplementationDetails_);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::_PrivateImplementationDetails_, "", "<PrivateImplementationDetails>");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace___PrivateImplementationDetails_____StaticArrayInitTypeSize=24, "", "<PrivateImplementationDetails>/__StaticArrayInitTypeSize=24");
