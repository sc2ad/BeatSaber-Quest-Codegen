#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class _PrivateImplementationDetails_;
}
// Type: ::<PrivateImplementationDetails>
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12953))
// CS Name: <PrivateImplementationDetails>
class CORDL_TYPE _PrivateImplementationDetails_ : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
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

static int64_t __declspec(property(get=__get_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F, put=__set_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F))  1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F;

static void __set_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F(int64_t value) ;

static int64_t __get_1D8EE5DD0A2536B5ABB8D369F6CAAB05B62A56201972EEE21AAC47EE5191257F() ;

static int64_t __declspec(property(get=__get_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67, put=__set_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67))  F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67;

static void __set_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67(int64_t value) ;

static int64_t __get_F5397012DCA333BF243C6AAB47AA9D0FD58EFF88D1589545161773E7420D2F67() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::_PrivateImplementationDetails_);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::_PrivateImplementationDetails_, "", "<PrivateImplementationDetails>");
