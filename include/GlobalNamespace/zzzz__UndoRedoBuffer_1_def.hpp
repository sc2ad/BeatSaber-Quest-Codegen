#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class UndoRedoBuffer_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class UndoRedoBuffer_1<T>;
}
// Type: ::UndoRedoBuffer`1
// Type: ::UndoRedoBuffer`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13846))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13846), inst: 2 })
// CS Name: UndoRedoBuffer`1
class CORDL_TYPE UndoRedoBuffer_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UndoRedoBuffer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: " const&", def_value: None }]
constexpr UndoRedoBuffer_1(UndoRedoBuffer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UndoRedoBuffer_1", modifiers: "&&", def_value: None }]
constexpr UndoRedoBuffer_1(UndoRedoBuffer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UndoRedoBuffer_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UndoRedoBuffer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UndoRedoBuffer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UndoRedoBuffer_1& operator=(UndoRedoBuffer_1&& o) noexcept = default;
  constexpr UndoRedoBuffer_1& operator=(UndoRedoBuffer_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<T> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get__data() const;

 int32_t __declspec(property(get=__get__capacity, put=__set__capacity))  _capacity;

constexpr void __set__capacity(int32_t value) ;

constexpr int32_t __get__capacity() const;

 int32_t __declspec(property(get=__get__cursor, put=__set__cursor))  _cursor;

constexpr void __set__cursor(int32_t value) ;

constexpr int32_t __get__cursor() const;


// Methods

static GlobalNamespace::UndoRedoBuffer_1<T> New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method Undo addr 0x0 size 0xffffffffffffffff virtual false final false
 T Undo() ;

/// @brief Method Redo addr 0x0 size 0xffffffffffffffff virtual false final false
 T Redo() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::UndoRedoBuffer_1, "", "UndoRedoBuffer`1");
