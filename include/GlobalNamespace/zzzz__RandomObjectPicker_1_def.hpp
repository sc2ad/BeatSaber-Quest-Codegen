#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class RandomObjectPicker_1<T>;
}
// Type: ::RandomObjectPicker`1
// Type: ::RandomObjectPicker`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13821))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13821), inst: 2 })
// CS Name: RandomObjectPicker`1
class CORDL_TYPE RandomObjectPicker_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~RandomObjectPicker_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: " const&", def_value: None }]
constexpr RandomObjectPicker_1(RandomObjectPicker_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "&&", def_value: None }]
constexpr RandomObjectPicker_1(RandomObjectPicker_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomObjectPicker_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RandomObjectPicker_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomObjectPicker_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomObjectPicker_1& operator=(RandomObjectPicker_1&& o) noexcept = default;
  constexpr RandomObjectPicker_1& operator=(RandomObjectPicker_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__objects, put=__set__objects))  _objects;

constexpr void __set__objects(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__objects() const;

 float_t __declspec(property(get=__get__lastPickTime, put=__set__lastPickTime))  _lastPickTime;

constexpr void __set__lastPickTime(float_t value) ;

constexpr float_t __get__lastPickTime() const;

 float_t __declspec(property(get=__get__minimumPickInterval, put=__set__minimumPickInterval))  _minimumPickInterval;

constexpr void __set__minimumPickInterval(float_t value) ;

constexpr float_t __get__minimumPickInterval() const;


// Methods

// Ctor Parameters [CppParam { name: "obj", ty: "T", modifiers: "", def_value: None }, CppParam { name: "minimumPickInterval", ty: "float_t", modifiers: "", def_value: None }]
explicit RandomObjectPicker_1(T obj, float_t minimumPickInterval) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T obj, float_t minimumPickInterval) ;

// Ctor Parameters [CppParam { name: "objects", ty: "::ArrayW<T>", modifiers: "", def_value: None }, CppParam { name: "minimumPickInterval", ty: "float_t", modifiers: "", def_value: None }]
explicit RandomObjectPicker_1(::ArrayW<T> objects, float_t minimumPickInterval) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> objects, float_t minimumPickInterval) ;

/// @brief Method PickRandomObject addr 0x0 size 0xffffffffffffffff virtual false final false
 T PickRandomObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RandomObjectPicker_1, "", "RandomObjectPicker`1");
