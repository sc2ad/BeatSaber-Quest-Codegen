#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class RollingAverage;
}
// Type: ::RollingAverage
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12880))
// CS Name: RollingAverage
class CORDL_TYPE RollingAverage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RollingAverage() = default;

// Ctor Parameters [CppParam { name: "", ty: "RollingAverage", modifiers: " const&", def_value: None }]
constexpr RollingAverage(RollingAverage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RollingAverage", modifiers: "&&", def_value: None }]
constexpr RollingAverage(RollingAverage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RollingAverage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RollingAverage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RollingAverage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RollingAverage& operator=(RollingAverage&& o) noexcept = default;
  constexpr RollingAverage& operator=(RollingAverage const& o) noexcept = default;
                


// Fields

/// @brief Field kGranularity offset 0
static constexpr int64_t  kGranularity{1000};

 int64_t __declspec(property(get=__get__currentTotal, put=__set__currentTotal))  _currentTotal;

constexpr void __set__currentTotal(int64_t value) ;

constexpr int64_t __get__currentTotal() const;

 float_t __declspec(property(get=__get__currentAverage, put=__set__currentAverage))  _currentAverage;

constexpr void __set__currentAverage(float_t value) ;

constexpr float_t __get__currentAverage() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__buffer() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 int32_t __declspec(property(get=__get__length, put=__set__length))  _length;

constexpr void __set__length(int32_t value) ;

constexpr int32_t __get__length() const;


// Properties

 float_t __declspec(property(get=get_currentAverage))  currentAverage;

 bool __declspec(property(get=get_hasValue))  hasValue;


// Methods

/// @brief Method get_currentAverage addr 0xdc7488 size 0x8 virtual false final false
 float_t get_currentAverage() ;

/// @brief Method get_hasValue addr 0xdc7490 size 0x10 virtual false final false
 bool get_hasValue() ;

// Ctor Parameters [CppParam { name: "window", ty: "int32_t", modifiers: "", def_value: None }]
explicit RollingAverage(int32_t window) ;

/// @brief Method .ctor addr 0xdc74a0 size 0x68 virtual false final false
 void _ctor(int32_t window) ;

/// @brief Method Update addr 0xdc7508 size 0x120 virtual false final false
 void Update(float_t value) ;

/// @brief Method Reset addr 0xdc7628 size 0x10 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RollingAverage);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RollingAverage, "", "RollingAverage");
